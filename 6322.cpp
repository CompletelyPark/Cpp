//#include <iostream>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//int main() {
//	int i = 1;
//	for (;;) {
//		cout << fixed;
//		cout.precision(3);
//		double a, b, c;
//		cin >> a >> b >> c;
//		if (a == 0 && b == 0 && c == 0) break;
//		cout << "Triangle #" << i << endl;
//		
//		
//			double x=0;
//			if (a == -1) {
//				x = c * c - b * b;
//				if (x <= 0)cout << "Impossible.";
//
//				else cout << "a = " << sqrt(x);
//				
//			}
//			else if (b == -1) {
//				x = c * c - a * a;
//				if (x <= 0)cout << "Impossible.";
//
//				else cout << "b = " << sqrt(x);
//			}
//			else if (c == -1) {
//				x = a * a + b * b;
//				if (x <= 0)cout << "Impossible.";
//
//				else cout << "c = " << sqrt(x);
//			}
//	
//			cout << endl << endl;
//	
//			i++;
//	}
//	
//	return 0;
//}