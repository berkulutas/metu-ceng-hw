#include "the5.h"

// do not add extra libraries here

int find_min_index(std::vector<int> q) {
    int min_index = 0;
    for (int i=0; i<q.size(); i++) { 
        min_index = q[i] < q[min_index] ? i : min_index;
    }
    return min_index;
}

bool topological_sort(const std::vector<std::vector<int>>& dependencyMatrix,
                      std::vector<int> &compileOrder) {
    int size = dependencyMatrix.size();
    std::vector<int> in_degree(size, false);

    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            if (dependencyMatrix[i][j]) in_degree[j]++; 
        }
    }

    std::vector<int> q; // queue

    for (int i=0; i<size; i++) {
        if (in_degree[i] == 0) 
            q.push_back(i);
    }

    int cnt = 0;

    while (q.size()) {
        int index = find_min_index(q);
        int u = q[index];
        compileOrder.push_back(u);
        q.erase(std::next(q.begin(), index));

        for (int j=0; j<size; j++) {
            if (dependencyMatrix[u][j]) {
                if (--in_degree[j] == 0)
                    q.push_back(j);
            }
        }
        cnt++; 
    }

    if (cnt != size) 
        return false;

    return true; 
}

void dfs(const std::vector<std::vector<int>>& dependencyMatrix,
        std::vector<int>& ids,
        std::vector<int>& stack,
        std::vector<int>& on_stack,
        std::vector<int>& low_link,
        int at,
        std::vector<std::vector<int>>& cyclicDependencies,
        int id) {
    stack.push_back(at);
    on_stack[at] = true;
    ids[at] = low_link[at] = id++;

    for (int to=0; to<dependencyMatrix.size(); to++) {
        if (dependencyMatrix[at][to]) {
            if (ids[to] == -1) {
                dfs(dependencyMatrix, ids, stack, on_stack, low_link, to, cyclicDependencies, id);
            }
            if (on_stack[to]) {
                low_link[at] = std::min(low_link[at], low_link[to]);
            }
        }
    }

    if (ids[at] == low_link[at]) {
        std::vector<int> scc;
        if (stack.back() == at) {
            stack.pop_back();
            on_stack[at] = false;
            if(dependencyMatrix[at][at]) scc.push_back(at);
        }
        else {
            int node;
            do {
                node = stack.back();
                stack.pop_back();
                on_stack[node] = false;
                scc.push_back(node);
            } while (node != at);

        }
        if (!scc.empty())cyclicDependencies.push_back(scc);
    }
}

void findSSCs(const std::vector<std::vector<int>>& dependencyMatrix,
              std::vector<std::vector<int>>& cyclicDependencies) {
    int size = dependencyMatrix.size();
    std::vector<int> ids(size, -1);
    std::vector<int> stack;
    std::vector<int> on_stack(size, false);
    std::vector<int> low_link(size, 0);


    for (int i=0; i<size; i++) {
        int id = 0;
        if (ids[i] == -1) {
            dfs(dependencyMatrix, ids, stack, on_stack, low_link, i, cyclicDependencies, id);
        }
    }

}

void run(const std::vector<std::vector<int>>& dependencyMatrix, 
         bool& isCompilable,
         std::vector<int>& compileOrder, 
         std::vector<std::vector<int>>& cyclicDependencies){
            
            isCompilable = topological_sort(dependencyMatrix, compileOrder);
            if (!isCompilable) findSSCs(dependencyMatrix, cyclicDependencies);
        }