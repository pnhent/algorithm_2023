#include <stdio.h>

#define V 5
#define infinity 100000

int min(int lhs, int rhs){
    return  lhs < rhs ? lhs : rhs;
}

int floyd_warshell(int dist[][V])
{

    for(int k = 1; k<= V; k++)
    {
        for(int i = 1; i <= V; i++)
        {
            for(int j = 1; j<=V; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }
} 

int main (void)
{
    int graph[5][5] =
    {
        {0, 3, infinity, 2, 1},
        {infinity, 0, 1, infinity, 1},
        {infinity, 1, 0, 6, 5},
        {3, infinity, 6, 0, infinity},
        {infinity, 1, 5, 1, 0}
    };

    

    floyd_warshell(graph);   
}