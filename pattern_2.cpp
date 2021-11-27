/*
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

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ", col%2);
        }

        cout << endl;
    }

    return 0;
}

