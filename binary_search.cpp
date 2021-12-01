// Binary Search algorithm

#include<iostream>
using namespace std;
int main()
{
    int ara[] = {1,3,4,7,9,12,13,15,18,30,33,39,55,66,77,85,87,90}, n=18, i, lo=0, hi=17, mid, num=3;

    cout << "Given Elements are: ";
    for(i=lo; i<=hi; i++)
        cout << ara[i] << " ";
    cout << endl << endl;

    while(lo<=hi)
    {
        mid = (lo+hi)/2;

        if(num == ara[mid])
            break;
        else if(num<ara[mid])
            hi = mid-1;
        else
            lo = mid+1;
    }

    if(lo>hi)
        cout << num << " not found\n";
    else
        cout << num << " found in " << mid << " position\n";

    return 0;
}
