#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		int arr1[12] = { 0, };
		int arr2[12] = { 0, };
		int cnt = 0;
		int b = 0;
		for (int j = 1; j < x; j++) {
			for (int k = 1; k < x; k++) {
				if (j == k)continue;
				if (j + k == x) {
					//cout << j << " " << k << endl;
					arr1[j] = j;
					arr2[j] = k;
					cnt++;
					if (cnt >= 4)b = 1;
					else b = 0;
				}
			}
		}
		cout << "Pairs for " << x << ": ";
		for (int j = 1; j < cnt/2+1; j++) {
			cout << arr1[j] << " " << arr2[j];
			if (b == 1 && j != (cnt / 2 + 1)-1)cout << ", ";
		}
		cout << endl;
	}



	return 0;
}