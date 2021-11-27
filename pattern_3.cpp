/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/

#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ", col+64);
        }

        cout << endl;
    }

    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%c ", col+64);
        }

        cout << endl;
    }


    return 0;
}

