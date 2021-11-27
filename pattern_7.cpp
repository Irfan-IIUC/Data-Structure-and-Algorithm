/*
    1 1 1
    2 2 2
    3 3 3
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
        for(col=1; col<=n; col++)
        {
            printf("%d ", row);
        }

        cout << endl;
    }

    return 0;
}

