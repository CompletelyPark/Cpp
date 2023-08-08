//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int x = 0;
//	cin >> x;
//	int sum1 = 0;
//	int sum2 = 0;
//
//	for (int i = 0; i < x; i++) {
//		int a = 0;
//		cin >> a;
//		int n1 = 0;
//		int n2 = 0;
//		if (n1 % 30 <= 29) n1 += 10;
//		n1 += (a / 30) * 10;
//		if (n2 % 60 <= 59) n2 += 15;
//		n2 += (a / 60) * 15;
//		sum1 += n1;
//		sum2 += n2;
//	}
//	if (sum1 > sum2) cout << "M " << sum2;
//	else if (sum1 < sum2) cout << "Y " << sum1;
//	else cout << "Y M " << sum1;
//
//
//	return 0;
//}