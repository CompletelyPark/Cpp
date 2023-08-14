//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main() {
//
//	for (;;) {
//		int x = 0, y = 0;
//		cin >> x >> y;
//		//cout << x << y;
//		if (x == 0 && y == 0) break;
//		int min = 1000000;
//		int mina = 0;
//		for (int j = 1; j <= x; j++) {
//			x = x-pow(j, y);
//			cout << j << "  " << x << endl;
//			if (abs(min) >= abs(x)) {
//				min = x;
//				mina = j;
//				//cout << min << " " << mina << endl;
//			}
//			//cout << pow(i, y) << endl;
//		}
//		cout << mina << endl;
//
//	}
//	return 0;
//}