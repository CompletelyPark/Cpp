//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		int n;
//		cin >> n;
//		int x1 = 0, x2 = 0;
//		for (int j = 0; j < n; j++) {
//			char c1, c2;
//			cin >> c1 >> c2;
//			if (c1 == c2) continue;
//			else {
//				if (c1 == 'P') {
//					if (c2 == 'R')x1++;
//					else if (c2 == 'S')x2++;
//				}
//				if (c1 == 'R') {
//					if (c2 == 'S')x1++;
//					else if (c2 == 'P')x2++;
//				}
//				if (c1 == 'S') {
//					if (c2 == 'P')x1++;
//					else if (c2 == 'R')x2++;
//				}
//			}
//		}
//		if (x1 > x2) cout << "Player 1" << endl;
//		else if (x1 < x2) cout << "Player 2" << endl;
//		else if (x1 == x2) cout << "TIE" << endl;
//
//	}
//	return 0;
//}