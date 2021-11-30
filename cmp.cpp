#include<bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;

} arr[100] = {{1,2}, {3,2}, {3,1}, {2,2}, {4,1}};

bool cmp(Point A, Point B)
{
    if(A.x < B.x) return 1;
    if(A.x > B.x) return 0;
    if(A.y < B.y) return 1;
    if(A.x > B.x) return 0;

    return 0;
}

int main()
{
    int n=5;

    cout << "Given 2D points: ";
    for(int i=0; i<n; i++)
    {
        cout << "(" << arr[i].x << "," << arr[i].y << ") ";
    }

    sort(arr, arr+n, cmp);

    cout << endl << "\nAfter sorting: ";
    for(int i=0; i<n; i++)
    {
        cout << "(" << arr[i].x << "," << arr[i].y << ") ";
    }

    cout << endl;

    return 0;
}
