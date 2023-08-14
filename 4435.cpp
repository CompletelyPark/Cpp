//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++) {
//		int arr1[6] = { 0, };
//		int arr2[7] = { 0, };
//		for (int j = 0; j < 6; j++) {
//			cin >> arr1[j];
//		}
//		for (int j = 0; j < 7; j++) {
//			cin >> arr2[j];
//		}
//		int sum1 = 0;
//		int sum2 = 0;
//		sum1 = 1 * arr1[0] + 2 * arr1[1] + 3 * arr1[2] + 3 * arr1[3] + 4 * arr1[4] + 10 * arr1[5];
//		sum2 = 1 * arr1[0] + 2 * arr2[1] + 2 * arr2[2] + 2 * arr2[3] + 3 * arr2[4] + 5 * arr2[5] + 10 * arr2[6];
//		cout << "Battle " << i + 1 << ": ";
//		if (sum1 > sum2) cout << "Good triumphs over Evil\n";
//		else if (sum1 < sum2) cout << "Evil eradicates all trace of Good\n";
//		else if(sum1==sum2) cout << "No victor on this battle field\n";
//
//	}
//	return 0;
//}