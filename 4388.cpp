//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	for (;;) {
//		int x, y;
//		cin >> x >> y;
//		if (x == 0 && y == 0) break;
//		int cnt = 0;
//		int a = 0;
//		for (;;) {
//			int x1 = x % 10;
//			int y1 = y % 10;
//			if (a == 1) {
//				if (min(x1, y1) == x1) x1++;
//				else y1++;
//			}
//			//cout << "-----------" << x1 << " " << y1 << " " << endl;
//
//			if (x1 + y1 == x1 || x1 + y1 == y1) break;
//			if (x1 + y1 >= 10) {
//				cnt++;
//				a = 1;
//			}
//			else a = 0;
//			x /= 10;
//			y /= 10;
//			//cout << x << " " << y << " " << endl;
//		}
//		cout << cnt << endl;
//	}
//	return 0;
//}