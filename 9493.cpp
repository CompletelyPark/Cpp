//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		int n = 0;
//		long long d = 0;
//		cin >> n >> d;
//		int v = 0, f = 0, c = 0;
//		int cnt = 0;
//		for (int j = 0; j < n; j++) {
//			cin >> v >> f >> c;
//			long long a = 0;
//			while (f > 0) {
//				a += v;
//				if (a >= d) {
//					cnt++;
//					break;
//				}
//				else
//					f -= c;
//			}
//		}
//		cout << cnt << endl;
//	}
//}