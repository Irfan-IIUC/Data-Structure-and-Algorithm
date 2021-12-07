/*
    combination formula -> 7c5 = 7! / 5! * (7-5)! = 21
*/

#include<iostream>
using namespace std;
int main()
{
    int ncr[50][50], i, j, limit=7;
    ncr[0][0] = 1;

    for(i=1; i<=limit; i++)
    {
        for(j=0; j<=limit; j++)
        {
            if(j>i)
                ncr[i][j] = 0;

            else if(j==i || j==0)
                ncr[i][j] = 1;
            else
                ncr[i][j] = ncr[i-1][j-1] + ncr[i-1][j];
        }
    }

    cout << "7C5 = " << ncr[7][5] << endl;
    return 0;
}
