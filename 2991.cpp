//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int a, b, c, d;
//	cin >> a >> b >> c >> d;
//	int p, m, n;
//	int p1=0, m1=0, n1=0;
//
//	cin >> p >> m >> n;
//	for (int i = 1; i <= a; i++) {
//		if ((p % (a + b)) == (i % (a + b))) p1++;
//		if ((m % (a + b)) == (i % (a + b))) m1++;
//		if ((n % (a + b)) == (i % (a + b))) n1++;
//
//	}
//	for (int i = 1; i <= c; i++) {
//		if ((p % (c + d)) == (i % (c + d))) p1++;
//		if ((m % (c + d)) == (i % (c + d))) m1++;
//		if ((n % (c + d)) == (i % (c + d))) n1++;
//
//	}
//	cout << p1 << endl;
//	cout << m1 << endl;
//	cout << n1 << endl;
//
//	return 0;
//}