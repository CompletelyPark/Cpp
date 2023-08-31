//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int main() {
//	int n = 0, m = 0;
//	cin >> n >> m;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	int max = 0;
//	for (int i = 0; i <= n - 3; i++) {
//		int a = arr[i];
//		for (int j = i + 1; j < n; j++) {
//			int b = arr[j];
//			for (int k = j + 1; k < n; k++) {
//				int c = arr[k];
//				if (a + b + c < m) {
//					if (max <= a + b + c) max = a + b + c;
//				}
//				else if (a + b + c == m) max = m;
//			}
//		}
//	}
//	cout << max;
//	delete[] arr;
//}
