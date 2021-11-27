/*
    arr[] = 2, 4, 8, 12, 15
    Enter 10
    arr[] = 2, 4, 10, 12, 15
    Enter 18
    arr[] = 2, 4, 8, 12, 15, 18 => Length = 6
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{2, 4, 8, 12, 15};
    int i, n1, n2;

    cin >> n1;
    for(i=0; i<n1; i++)
    {
        cin >> n2;
        vector<int>::iterator it = lower_bound(v.begin(), v.end(), n2);

        if(v.end() == it)
            v.push_back(n2);
        else
            v[it-v.begin()] = n2;

        for(auto i:v)
            cout << i << " ";

        cout << endl;
    }

    cout << endl << "Length of v is: " << v.size() << endl;
    return 0;
}
