/*
    coin = 4, 7, 10 [k=3]
    n = 14
    we are not allowed to use the same coin more than once
    {4, 10} = Answer
*/

#include<stdio.h>
int main()
{
    int dp[100]={0}, coin[3]={4,7,10}, k=3, n=14, i, j;
    dp[0] = 1;

    for(j=0; j<k; j++)
    {
        for(i=n; i>=1; i--)
        {
            if((i>=coin[j]) && (dp[i-coin[j]]))
            {
                dp[i] = 1;
            }
        }
    }

    for(i=1; i<=n; i++)
        printf("%d ", dp[i]);

    printf("\n%d\n", dp[n]);

    return 0;
}
