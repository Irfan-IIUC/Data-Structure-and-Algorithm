/*
          1
        1 2
      1 2 3
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
        for(col=1; col<=n-row; col++)
        {
            cout << " ";
        }

        for(col=1; col<=row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            cout << " ";
        }

        for(col=1; col<=row; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}


