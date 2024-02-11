#include "the4.h"

// do not add extra libraries here

std::vector<std::vector<int>> DP;
std::vector<std::pair<int, int>> plots;

// do not add extra libraries here
int divide_land_recur(int X, int Y, bool** possible_plots) {
    if (DP[X][Y] != -1) {
        return DP[X][Y];
    }

    int res = X*Y;

    for (int i=0; i<plots.size(); i++) {
        int x = plots[i].first;
        int y = plots[i].second;
        if (x <= X && y <= Y) {
            int vertical = divide_land_recur(X-x, Y, possible_plots) + divide_land_recur(x, Y-y, possible_plots);
            int horizontal = divide_land_recur(X-x, y, possible_plots) + divide_land_recur(X, Y-y, possible_plots);
            res = std::min(std::min(vertical, horizontal),res);
        }
    }
    
    DP[X][Y] = res;
    
    return res; 
}

int divide_land(int X, int Y, bool** possible_plots) {
    DP.resize(X+1);
    for (int i=0; i<=X; i++) {
        DP[i].resize(Y+1);
        for (int j=0; j<=Y; j++) {
            DP[i][j] = -1;
        }
    }
    // get plots from possible_plots
    for (int i=0; i<=X; i++) {
        for (int j=0; j<=Y; j++) {
            if (possible_plots[i][j]) {
                plots.push_back(std::make_pair(i,j));
            }
        }
    }

    return divide_land_recur(X, Y, possible_plots);
}

