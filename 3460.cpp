//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		int x = 0;
//		cin >> x;
//		int j = 0;
//		int cnt = 0;
//		int arr[1000] = { 0, };
//		while (x != 0) {
//			if (x % 2 == 1)arr[j] = 1;
//			else arr[j] = 0;
//			x /= 2;
//			j++;
//			cnt++;
//		}
//		for (int k = 0; k < cnt; k++) {
//			if (arr[k] == 1)cout << k << " ";
//		}
//	}
//	return 0;
//}