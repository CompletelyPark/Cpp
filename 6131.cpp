//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int n = 0;
//	cin >> n;
//	int arr1[501] = { 0, };
//
//	for (int i = 1; i <= 500; i++) {
//		arr1[i] = i * i;
//	}
//	int cnt = 0;
//	for (int i = 1; i <= 500; i++) {
//		for (int j = 1; j <= 500; j++) {
//			if (arr1[j] - arr1[i] == n)cnt++;
//			else continue;
//		}
//	}
//	cout << cnt;
//	return 0;
//}