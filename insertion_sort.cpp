// Insertion sort algorithm => time complexity O(n²)

#include<iostream>
using namespace std;
int main()
{
    int num[] = {5,8,6,1,7,9}, n=6, i, j, x;

    cout << "Given numbers are: ";
    for(auto x:num)
        cout << x << " ";
    cout << endl;

    for(i=0; i<n; i++)
    {
        x = num[i];
        j = i-1;

        while(j>=0 && num[j]>x)
        {
            num[j+1] = num[j];
            j--;
        }

        num[j+1] = x;
    }

    cout << "Sorted numbers are: ";
    for(auto x:num)
        cout << x << " ";
    cout << endl;

    return 0;
}
