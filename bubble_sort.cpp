// Bubble sort algorithm => time complexity O(n²)

#include<iostream>
using namespace std;
int main()
{
    int num[] = {5,8,6,1,7,9}, n=6, i, j, temp;

    cout << "Given numbers are: ";
    for(auto x:num)
        cout << x << " ";
    cout << endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(num[j+1]<num[j])
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    cout << "Sorted numbers are: ";
    for(auto x:num)
        cout << x << " ";
    cout << endl;

    return 0;
}

