//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int i = 1;
//
//	for (;;) {
//		int a=0;
//		cin >> a;
//		if (a == 0) break;
//		int b = 0;
//		b = a* 3;
//		int x = 0;
//		if (b % 2 != 0) x = 1;// È¦¼ö
//		else x = 0; // Â¦¼ö
//		if (x == 0) a /= 2;
//		else if (x == 1)a = (a - 1) / 2;
//		
//		cout << i << ". ";
//		if (x == 0) cout << "even " << a << endl;
//		else if(x==1) cout << "odd " << a << endl;
//		i++;
//	}
//
//
//	return 0;
//}