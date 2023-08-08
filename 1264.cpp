//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main() {
//	char c[10] = { 'a','e','i','o','u','A','E','I','O','U' };
//	for (;;) {
//		string s;
//		cin.ignore();
//		getline(cin, s);
//		if (s == "#") break;
//		int cnt = 0;
//		for (int i = 0; i < s.size(); i++) {
//			char c1 = s[i];
//			for (int j = 0; j < 10; j++) {
//				if (c1 == c[j]) cnt++;
//			}
//		}
//		cout << cnt << "\n";
//	}
//
//
//	return 0;
//}