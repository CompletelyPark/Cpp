//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//    for (;;) {
//        int arr[3] = { 0, };
//        for (int i = 0; i < 3; i++) {
//            cin >> arr[i];
//        }
//        sort(arr, arr + 3);
//        int a = 0, b = 0, c = 0;
//        a = arr[0];
//        b = arr[1];
//        c = arr[2];
//        if (a == 0 && b == 0 && c == 0) break;
//        if (a + b <= c) cout << "Invalid";
//        else {
//            if (a == b && b == c && c == a) cout << "Equilateral";
//            else if (a == b || b == c || c == a) cout << "Isosceles";
//            else if (a != b && b != c && c != a) cout << "Scalene";
//        }
//        cout << "\n";
//    }
//    return 0;
//}