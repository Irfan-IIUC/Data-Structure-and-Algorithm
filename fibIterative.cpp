/*
    n = 4
    number = 1, 2
    {(1,1,1,1), (1,1,2), (1,2,1), (2,1,1), (2,2)} = 5 ways
*/

#include<stdio.h>

int main()
{
    int way[50], n=4, i;
    way[0] = way[1] = 1;

    for(i=2; i<=n; i++)
    {
        way[i] = way[i-1] + way[i-2];
    }

    printf("%d\n", way[n]);
    return 0;
}
