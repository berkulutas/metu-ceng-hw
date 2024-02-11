#include "the3.h"

// do not add extra libraries, but you can define helper functions below.

int max(int a, int b) {return a>b ? a : b; }

int recursive_helper(std::string sequence_A, int i, std::string sequence_B, int j, int gap, int mismatch, int match, std::string &possible_alignment, int &call_count) {
    call_count++; 
    if (call_count >= 1000000) {
        possible_alignment = "STACK LIMIT REACHED";
        return INT_MIN;
    }

    if (i == 0) {
        possible_alignment = std::string(j, '_');
        return -(j*gap); 
    }

    if (j == 0) {
        possible_alignment = std::string(i, '.');
        return -(i*gap); 
    }

    std::string str1, str2, str3;
    
    int c = (sequence_A[i-1] == sequence_B[j-1] ? match : -mismatch);

    int r1 = recursive_helper(sequence_A, i-1, sequence_B, j-1, gap, mismatch, match, str1, call_count) + c;
    int r2 = recursive_helper(sequence_A, i-1, sequence_B, j, gap, mismatch, match, str2, call_count) - gap;
    int r3 = recursive_helper(sequence_A, i, sequence_B, j-1, gap, mismatch, match, str3, call_count) - gap;
    if (call_count >= 1000000) {
        possible_alignment = "STACK LIMIT REACHED";
        return INT_MIN;
    }

    int maxscore = max(r1, max(r2,r3));

    if (maxscore == r1) {
        possible_alignment = str1 + (sequence_A[i-1] == sequence_B[j-1]  ? sequence_A[i-1]:'!');
    }
    else if (maxscore == r2) {
        possible_alignment = str2 + '.';
    }
    else {
        possible_alignment = str3 + '_';
    } 


    return maxscore;
}

/* 
PART 1
you are expected to call recursive_alignment (as the name suggests) recursively to find an alignment. 
initial call_count value given to you will be 0.
you should check if call_count >= 1000000, if so, set possible_alignment string to "STACK LIMIT REACHED", return INT_MIN (or anything - it will not be checked).
*/
int recursive_alignment(std::string sequence_A, std::string sequence_B, int gap, int mismatch, int match, std::string &possible_alignment, int call_count){
    int highest_alignment_score = recursive_helper(sequence_A, sequence_A.length(), sequence_B, sequence_B.length(), gap, mismatch, match, possible_alignment, call_count);

    return highest_alignment_score;    
}
/* 
PART 2
you are expected to create a dynamic programming table to find the highest alignment score. 
then you will need to reconstruct a possible alignment string from the table.
*/
int dp_table_alignment(std::string sequence_A, std::string sequence_B, int gap, int mismatch, int match, std::string &possible_alignment){
    int m = sequence_A.length();
    int n = sequence_B.length();

    std::vector<std::vector<int> > dp(m+1, std::vector<int> (n+1, 0));

    for (int j=1; j<=n; j++) {
        dp[0][j] = dp[0][j-1] - gap;
    }

    for (int i=1; i<=m; i++) {
        dp[i][0] = dp[i-1][0] - gap; 
    }

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            int tmp_score = dp[i-1][j-1] + (sequence_A[i-1] == sequence_B[j-1] ? match : -mismatch);
            dp[i][j] = max(tmp_score, max(dp[i-1][j] - gap, dp[i][j-1] - gap));
        }
    }

    int i=m;
    int j=n;

    while(i>0 || j>0) {
        if (i>0 && j>0 && dp[i][j] == (dp[i-1][j-1] + ((sequence_A[i-1] == sequence_B[j-1] ? match : -mismatch)))) {
            if (dp[i][j] == (dp[i-1][j-1] + match)) {
                possible_alignment = sequence_A[i-1] + possible_alignment;
                i--;
                j--;
            }
            else if (dp[i][j] == (dp[i-1][j-1] - mismatch)) {
                possible_alignment = '!' + possible_alignment;
                i--;
                j--;
            }
        }
        else if (i>0 && (dp[i][j] == dp[i-1][j] - gap)) {
            possible_alignment = '.' + possible_alignment;
            i--; 
        }
        else {
            possible_alignment = '_' + possible_alignment;
            j--; 
        }
    }
 
    int highest_alignment_score = dp[m][n];
    
    
    return highest_alignment_score;    
}