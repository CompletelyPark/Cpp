//#include <iostream>
//#include <algorithm>
//
//
//using namespace std;
//
//int fact(int n) {
//	int res = 1;
//	for (int i = 1; i <= n; i++) {
//		res *= i;
//	}
//
//	return res;
//}
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	cin.tie(0);
//	for (;;) {
//		int a = 0;
//		cin >> a;
//		int b = 0;
//		int sum = 0;
//		int len = 1;
//		if (a == 0) break;
//		while (a) {
//			b = a % 10;
//			sum += b *fact(len);
//			a /= 10;
//			len++;
//			//cout << a << " " << b << " " << len << " " << sum << endl;
//		}
//		cout << sum << '\n';
//	}
//	return 0;
//}