//#include<iostream>
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	int arr1[26] = { 0, };
//	int arr2[26] = { 0, };
//	
//	for (int i = 0; i < 26; i++) {
//		arr1[i] = i+97;
//	}
//	for (int i = 0; i < s.size(); i++) {
//		char c = s[i];
//		int x = int(char(s[i]));
//		//printf("%d\n", x);
//		for (int j = 0; j < 26; j++) {
//			if (x == arr1[j]) arr2[j] += 1;
//		}
//	}
//	for (int i = 0; i < 26; i++) {
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}