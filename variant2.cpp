/*
    coin = 1, 2 [total coin, k=2]
    n = 4 [you have to make 4]
    {(1,1,1,1), (1,1,2), (1,2,1), (2,1,1), (2,2)} = 5 ways
*/

#include<stdio.h>

int main()
{
    int way[100]={0}, coin[2]={1, 2}, k=2, n=4, i, j;
    way[0] = 1;

    for(i=1; i<=n; i++)
    {
        for(j=0; j<k; j++)
        {
            if(i>=coin[j])
            {
                way[i] += way[i-coin[j]];
            }
        }
    }

    for(i=0; i<=n; i++)
        printf("%d ", way[i]);

    printf("\n%d\n", way[n]);
    return 0;
}
