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
//	for (int i = 0; i < 26; i++) {
//		arr[i] = -1;
//	}
//	char arr1[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
//	for (int i = 0; i < s.length(); i++) {
//		
//		char c = s[i];
//		if (arr[distance(arr1, find(begin(arr1), end(arr1), c))] != -1)continue;
//		arr[distance(arr1, find(begin(arr1), end(arr1), c))] = i;
//	}
//
//	for (int i = 0; i < 26; i++) {
//		cout<<arr[i]<<" ";
//	}
//}