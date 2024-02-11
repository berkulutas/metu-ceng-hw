#include "the7.h"

// do not add extra libraries here

void floyd_warshall(const std::vector<std::vector<std::pair<int, int>>>& network,
                    std::vector<std::vector<int>>& dist,
                    int size){
    for(int idx=0; idx < size; idx++){
        dist[idx][idx] = 0;
        for(const auto& edge : network[idx]){
            dist[idx][edge.first] = edge.second;
        }
    }
    for(int k=0; k < size; k++){
        for(int i=0; i < size; i++){
            for(int j=0; j < size; j++){
                if(dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}




void get_infection_scores(const std::vector<std::vector<std::pair<int, int>>>& network,
                          std::vector<float>& infection_scores){
    int size = network.size();
    std::vector<std::vector<int>> dist(size, std::vector<int>(size, INT_MAX));
    int max_distance = 0;

    floyd_warshall(network, dist, size);

    // find max_distance
    for(int i=0; i < size; i++){
        for(int j=0; j < size; j++){
            if(dist[i][j] != INT_MAX) max_distance = std::max(max_distance, dist[i][j]);
        }
    }

    infection_scores.resize(size);

    for(int idx=0; idx < size; idx++){
        int total=0; 
        for (int idy=0; idy < size; idy++){
            if (idx != idy) {
                if (dist[idx][idy] == INT_MAX) total += max_distance+1;
                else total += dist[idx][idy];

            }
        }
        infection_scores[idx] = 1/ ((float) total / (size-1));
    }                   
}