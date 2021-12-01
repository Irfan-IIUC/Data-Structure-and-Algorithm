// String sort in dictionary order

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    vector<string> v;
    char s[100];

    cout << "Enter 5 word: ";
    for(int i=1; i<=5; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    cout << endl << "Sorted Elements are: ";
    for(auto x:v)
        cout << x << " ";
    cout << endl;

    return 0;
}
