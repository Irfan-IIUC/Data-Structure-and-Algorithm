// Program to find all divisors of a number
// 24 => 1, 2, 3, 4, 6, 8, 12, 24

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> divisors[1000];
    int i, j, n=50;

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j+=i)
        {
            divisors[j].push_back(i);
        }
    }

    for(i=1; i<=n; i++)
    {
        cout << "Divisors of " << i << " : ";

        for(j=0; j<divisors[i].size(); j++)
        {
            cout << divisors[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
