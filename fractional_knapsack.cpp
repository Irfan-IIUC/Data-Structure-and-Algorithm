// greedy technique -> fractional knapsack algorithm

#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

typedef pair<int, int> PII;
vector<PII> v;

bool cmp(PII a, PII b)
{
    return (a.second * b.first) > (a.first * b.second);
}

void fractionl_knapsack()
{
    int n, w;

    cout << "Enter total item: ";
    cin >> n;
    cout << endl << "Enter the item weight and price: ";

    for(int i=0; i<n; i++)
    {
        int weight, price;
        cin >> weight >> price;

        v.push_back(PII(weight, price));
    }

    sort(v.begin(), v.end(), cmp);
    cout << endl << "Enter the bag capacity: ";

    cin >> w;
    int ans = 0;

    for(int i=0; i<n; i++)
    {
        int z = min(w, v[i].first);
        w = w-z;
        ans = ans + (z*v[i].second);
    }

    cout << "Maximum cost: " << ans << endl;
}

int main()
{
    fractionl_knapsack();

    return 0;
}
