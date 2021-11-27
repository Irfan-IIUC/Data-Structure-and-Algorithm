/*
    coin = 4, 7, 15 [total coin, k = 3]
    n = 15 [can you make 15]
    {4, 4, 7} = 15
*/

#include<stdio.h>

int main()
{
    int possible[100]={0}, coin[3]={4,7,15}, k=3, n=15, i, j;
    possible[0] = 1;

    for(i=1; i<=n; i++)
    {
        for(j=0; j<k; j++)
        {
            if(i>=coin[j])
            {
                possible[i] |= possible[i-coin[j]];
            }
        }
    }

    for(i=0; i<=n; i++)
        printf("%d ", possible[i]);

    if(possible[n] == 1)
        printf("\nYes\n");
    else
        printf("\nNo\n");

    return 0;
}
