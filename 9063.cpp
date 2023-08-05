//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int main() {
//	int maxx = -10000, maxy = -10000;
//	int minx = 10000, miny = 10000;
//
//	int t;
//	cin >> t;
//
//		for (int i = 0; i < t; i++) {
//			int x, y;
//			cin >> x >> y;
//			if (maxx <= x)maxx = x;
//			if (maxy <= y)maxy = y;
//			if (minx >= x)minx = x;
//			if (miny >= y)miny = y;
//			//cout << maxx << maxy << minx << miny;
//		}
//
//		int ans = 0;
//		ans = (maxx - minx) * (maxy - miny);
//		if (t < 2) cout << "0";
//		else
//			cout << ans;
//	
//	return 0;
//}