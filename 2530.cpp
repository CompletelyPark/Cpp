//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int a=0, b=0, c=0;
//	int d = 0;
//	cin >> a >> b >> c;
//	cin >> d;
//	c += d % 60;
//	if (c >= 60) {
//		b += 1;
//		c = c - 60;
//	}
//	b += d / 60;
//	if (b >= 60){
//	
//		a = a + b/60;
//		b %= 60;
//	}
//	if (a >= 24) a = a % 24;
//	cout << a <<" " << b << " " << c;
//	return 0;
//}