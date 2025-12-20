//graph representation 
#include <stdio.h>
#define V 4

int main() {
    int graph[V][V] = {
        {0,1,1,0},
        {1,0,1,1},
        {1,1,0,1},
        {0,1,1,0}
    };

    for(int i=0;i<V;i++) {
        for(int j=0;j<V;j++)
            printf("%d ", graph[i][j]);
        printf("\n");
    }
    return 0;
}
