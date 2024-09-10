#include <stdio.h>
void DFS(int graph[6][6], int vertex, int visited[6]) {
    visited[vertex] = 1;
    printf("%d ", vertex);
    for (int i = 0; i < 6; i++) {
        if (graph[vertex][i] && !visited[i]) {
            DFS(graph, i, visited);
        }
    }
}
int main() {
    int graph[6][6] = {{0, 1, 0, 0, 0, 0},
                      {1, 0, 1, 0, 0, 0},
                      {0, 1, 0, 1, 0, 0},
                      {0, 0, 1, 0, 1, 0},
                      {0, 0, 0, 1, 0, 1},
                      {0, 0, 0, 0, 1, 0}};
    int visited[6] = {0};
    DFS(graph, 0, visited);
    return 0;
}
