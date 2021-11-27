/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
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
            printf("%d ", col);
        }

        cout << endl;
    }

    return 0;
}
