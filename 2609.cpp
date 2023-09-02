//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int main() {
//	int n = 0,m=0;
//	cin >> n>>m;
//	int cnt1 = 0, cnt2 = 0;
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0)cnt1++;
//	}
//	for (int i = 1; i <= m; i++) {
//		if (m % i == 0)cnt2++;
//	}
//	int* arr1 = new int[cnt1];
//	int* arr2 = new int[cnt2];
//	int x = 0;
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			arr1[x] = i;
//			x++;
//		}
//	}
//	int y = 0;
//	for (int i = 1; i <= m; i++) {
//		if (m % i == 0) {
//			arr2[y] = i;
//			y++;
//		}
//	}
//
//	int max = 0;
//	for (int i = 0; i < cnt1; i++) {
//		for (int j = 0; j < cnt2; j++) {
//			if (arr1[i] == arr2[j] && max <= arr1[i]) {
//				max = arr1[i];
//			}
//
//		}
//	}
//	cout << max<<endl;
//	cout << n*m/max << endl;
//
//}
