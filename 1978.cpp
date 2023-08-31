//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int main() {
//	int a = 0;
//	cin >> a;
//	int* arr = new int[a];
//	for (int i = 0; i < a; i++) {
//		cin >> arr[i];
//	}
//	int n1 = 0; 
//	for (int i = 0; i < a; i++) {
//		int x = arr[i];
//		int n = 0;
//		if (x != 1) {
//			for (int j = 1; j < x; j++) {
//				if (x % j == 0) {
//					n++;
//				}
//			}
//			if (n < 2)n1++;
//		}
//	}
//	delete[] arr;
//	cout << n1;
//}