//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//
//	int t = 0;
//	cin >> t;
//	int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;
//	for (int i = 0; i < t; i++) {
//		int n = 0, k = 0;
//		cin >> n >> k;
//		if (n == 0 || k == 0)axis++;
//		else if (n > 0) {
//			if (k > 0)q1++;
//			else if (k < 0)q4++;
//		}
//		else if (n < 0) {
//			if (k > 0)q2++;
//			else if (k < 0)q3++;
//		}
//	}
//	cout << "Q1: " << q1 << endl;
//	cout << "Q2: " << q2 << endl;
//	cout << "Q3: " << q3 << endl;
//	cout << "Q4: " << q4 << endl;
//	cout << "AXIS: " << axis << endl;
//
//}