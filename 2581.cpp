//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int main() {
//	int n = 0, m = 0;
//	cin >> n >> m;
//	int sum = 0;
//	int min = 10000;
//	int cnt1 = 0;
//	for (int i = n; i <= m; i++) {
//		int cnt = 0;
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0)cnt++;
//		}
//		if (i!=1&&cnt ==0) {
//			sum += i;
//			if (min >= i)min = i;
//			cnt1++;
//		}
//	}
//	if (cnt1 == 0) cout << "-1";
//	else cout << sum << "\n" << min << endl;
//}
