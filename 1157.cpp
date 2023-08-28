//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int main() {
//	string s;
//	getline(cin, s);
//	int arr[26] = { 0, };
//	char arr1[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
//	
//	for (int i = 0; i < s.length(); i++) {
//		char c = s[i];
//		c = tolower(c);
//		for (int j = 0; j < 26; j++) {
//			if (c == arr1[j]) {
//				arr[j] += 1;
//			}
//		}
//	}
//	int max = 0;
//	int x = 0;
//
//	for (int j = 0; j < 26; j++) {
//		cout << arr[j] << " ";
//		if (arr[j] >= arr[max]) max = j;
//	}
//	//cout << endl;
//	for (int j = 0; j < 26; j++) {
//		if (j == max)continue;
//		else {
//			if (arr[max] == arr[j]) {
//				x = 1;
//			}
//		}
//	}
//	//cout << endl;
//
//	if (x == 1)cout << "?";
//	else
//		cout << (char)toupper(arr1[max]);
//
//}