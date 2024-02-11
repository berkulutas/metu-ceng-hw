#include "the6.h"

// do not add extra libraries here

int find_structure(std::vector< std::vector<std::pair<int,int> > >& bond_energies, std::vector< std::vector<std::pair<int,int> > >& lowest_energy_structure) {
    int lowest_total_energy = 0;
    int n = bond_energies.size();
    std::vector<bool> visited(n, false);
    std::vector<int> key(n, INT_MAX);
    std::priority_queue<std::pair<int, std::pair<int, int>>, std::vector<std::pair<int, std::pair<int, int>>>, std::greater<std::pair<int, std::pair<int,int>>>> pq;

    key[0] = 0;
    for (auto p : bond_energies[0]) {
        pq.push({p.second, {p.first, 0}});
    }
    visited[0] = true;

    while (!pq.empty()) {
        auto popped = pq.top();
        pq.pop();

        auto weight = popped.first;
        auto to = popped.second.first;
        auto from = popped.second.second;

        if (!visited[to]) {
            lowest_total_energy += weight;
            lowest_energy_structure[to].push_back({from, weight});
            lowest_energy_structure[from].push_back({to, weight});
        }
        visited[to] = true; 

        int new_from = to; 
        for (auto p : bond_energies[to]) {
            int new_to = p.first;
            int new_weight = p.second;
            if (!visited[new_to] && key[new_to] > new_weight) {
                key[new_to] = new_weight;
                pq.push({new_weight, {new_to, new_from}});
            }
        }
    }

    return lowest_total_energy;
}
int bfs(int u, int size, std::vector< std::vector<std::pair<int,int> > >& graph, std::vector<int> &path, bool find_path=false) {
    std::queue<int> q;
    std::vector<int> distance(size, INT_MAX);
    std::vector<int> parent(size);
    std::vector<bool> visited(size, false);

    q.push(u);
    visited[u] = true; 
    parent[u] = -1;
    distance[u] = 0; 

    while(!q.empty()) {
        int v = q.front();
        q.pop();

        for(auto p : graph[v]) {
            auto node = p.first;
            if (!visited[node]) {
                visited[node] = true;
                q.push(node);
                distance[node] = distance[v] + 1;
                parent[node] = v; 
            }
        }
    }

    std::pair<int, int> res = {0, distance[0]};

    for (int i=0; i<size; i++) {
        if (distance[i] > res.second) {
            res = {i, distance[i]};
        }
    }

    if (find_path) {
        int start = res.first;
        while(start != -1) {
            path.push_back(start);
            start = parent[start];
        }
    }

    return res.first; 
}

int find_longest_chain(std::vector< std::vector<std::pair<int,int> > >& molecule_structure, std::vector<int>& chain){
    int longest_chain_size = 0;
    int size = molecule_structure.size();
    int furthest = bfs(0, size, molecule_structure, chain);
    bfs(furthest, size, molecule_structure, chain, true);
    longest_chain_size = chain.size(); 
    return longest_chain_size;
}
