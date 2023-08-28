//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main() {
//	cout << fixed;
//	cout.precision(3);
//
//	int c = 0;
//	cin >> c;
//	for (int i = 0; i < c; i++) {
//		int n = 0;
//		cin >> n;
//		double* arr = new double[n];
//		double sum = 0;
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//			sum += arr[i];
//		}
//		sum /= n;
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (sum < arr[i])cnt++;
//		}
//		cout << double(cnt) / n * 100 <<"%" << endl;
//	}
//}