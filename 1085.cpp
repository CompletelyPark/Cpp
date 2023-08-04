#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    x1 = x - 0;
    y1 = y - 0;
    x2 = w - x;
    y2 = h - y;
    int arr[4] = { x1,y1,x2,y2 };
    sort(arr, arr + 4);
    cout << arr[0];
}