//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main() {
//
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int arr[3] = { 0, };
//		for (int j = 0; j < 3; j++) cin >> arr[j];
//		sort(arr, arr + 3);
//		cout << "Case #" << i + 1 << ": ";
//		if (arr[2] >= arr[1] + arr[0])cout << "invalid!";
//		else {
//			if (arr[2] == arr[1] && arr[1] == arr[0])cout << "equilateral";
//			else if (arr[2] != arr[1] && arr[1] != arr[0])cout << "scalene";
//			else if (arr[2] == arr[1] || arr[1] == arr[0])cout << "isosceles";
//
//		}
//		cout << endl;
//	}
//
//	return 0;
//}