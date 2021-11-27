/*
    1
    2 4
    3 6 9
    4 8 12 16
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
            printf("%d ", row*col);
        }

        cout << endl;
    }

    return 0;
}

