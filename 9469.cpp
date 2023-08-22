#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	cout << fixed;
	cout.precision(6);
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double arr[5] = { 0, };
		for (int j = 0; j < 5; j++) cin >> arr[j];
		cout <<(int)arr[0]<<" " << (arr[1] / (arr[2] + arr[3])) * arr[4];
		cout << endl;
	}

	return 0;
}