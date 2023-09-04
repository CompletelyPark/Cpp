//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int main() {
//	int arr[15][15] = { 0, };
//	for (int i = 0; i < 15; i++) {
//		arr[0][i] = i+1;
//		arr[i][0] = 1;
//	}
//	for (int i = 1; i < 15; i++) {
//		for (int j = 1; j < 15; j++) {
//			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
//		}
//	}
//	//for (int i = 0; i < 15; i++) {
//	//	for (int j = 0; j < 15; j++) {
//	//		cout << arr[i][j]<<" ";
//	//	}
//	//	cout << endl;
//	//}
//
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		int k = 0, n = 0;
//		cin >> k >> n;
//		cout << arr[k][n-1] << endl;
//	}
//}
