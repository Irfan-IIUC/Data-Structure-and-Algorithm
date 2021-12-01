// Linear Search algorithm

#include<iostream>
using namespace std;
int main()
{
    int ara[] = {1,3,4,7,9,12,13,15,18,30,33,39,55,66,77,85,87,90}, n=18, i, num=8, found=0;

    cout << "Given Elements are: ";
    for(i=0; i<n; i++)
        cout << ara[i] << " ";
    cout << endl << endl;

    for(i=0; i<n; i++)
    {
        if(ara[i] == num)
        {
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << num << " not found\n";
    else
        cout << num << " found in " << i << " position\n";

    return 0;
}

