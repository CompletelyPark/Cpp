//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		string s;
//		cin >> s;
//		char c1[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
//
//		for (int j = s.size() - 1; j >= 0; j--) {
//			char c = s[j];
//			for (int k = 0; k < 26; k++) {
//				if (c1[k] == c)c1[k] = 0;
//			}
//		}
//		int sum = 0;
//		for (int k = 0; k < 26; k++) {
//			sum += c1[k];
//		}
//		cout << sum << endl;
//	}
//	
//	return 0;
//}