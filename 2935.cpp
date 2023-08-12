//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string a, c;
//	char b;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	if (b == '*') {
//		c.erase(0, 1);
//		a.append(c);
//		cout << a;
//	}
//	else {
//		int cnt1 = a.length();
//		int cnt2 = c.length();
//		if (cnt1 > cnt2) {
//			a.erase(cnt1-cnt2,cnt2);
//			a.append(c);
//			cout << a;
//		}
//		else if(cnt1 < cnt2) {
//			c.erase(cnt2 - cnt1, cnt1);
//			c.append(a);
//			cout << c;
//		}
//		else {
//			a[0] = '2';
//			cout << a;
//		}
//	}
//
//
//	return 0;
//}