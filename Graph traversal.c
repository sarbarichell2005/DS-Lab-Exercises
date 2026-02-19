//graph traversal
#include <stdio.h>
#define V 4

int visited[V] = {0};
int graph[V][V] = {
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
};

void dfs(int v) {
    visited[v] = 1;
    printf("%d ", v);
    for(int i=0;i<V;i++)
        if(graph[v][i] && !visited[i])
            dfs(i);
}

int main() {
    dfs(0);
    return 0;
}
