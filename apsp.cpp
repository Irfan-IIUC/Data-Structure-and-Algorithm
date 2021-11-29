/*
    Floyd's algorithm to find shortest path matrix from weighted matrix
*/

#include<stdio.h>
#include<conio.h>

#define MAXNODE 20
#define INFINITY 9999

int main()
{
    int i, j, k, vertices, path[MAXNODE][MAXNODE], adj[MAXNODE][MAXNODE];

    printf("\nHow many vertices in the graph: ");
    scanf("%d", &vertices);

    printf("\nEnter the weight of EDGEs: \n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("    Weight of EDGE from vertex %d to %d: ", i, j);
            scanf("%d", &adj[i][j]);
        }

        printf("\n");
    }

    // set each diagonal entry to 0

    for(i=1; i<=vertices; i++)
        adj[i][i] = 0;

    // print the matrix

    printf("\nThe given weighted matrix is: \n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("%5d", adj[i][j]);
        }

        printf("\n");
    }

    // create path matrix by using floyd's algorithm
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            path[i][j] = adj[i][j];

            if(!adj[i][j] && i!=j)
                path[i][j] = INFINITY;
        }
    }

    // find the shortest path and store it
    for(k=1; k<=vertices; k++)
    {
        for(i=1; i<=vertices; i++)
        {
            for(j=1; j<=vertices; j++)
            {
                if(path[i][k] && path[k][j])
                {
                    if((path[i][k]+path[k][j]) < path[i][j])
                        path[i][j] = path[i][k] + path[k][j];
                }
            }
        }
    }

    // print the matrix

    printf("\nThe path matrix is: \n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("%5d", path[i][j]);
        }

        printf("\n");
    }

    return 0;
}
