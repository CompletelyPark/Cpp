/*

#include <string>
#include <vector>
#include <iostream>

using namespace std;

void main()
{
	string s = "-1234";
	int answer = 0;
	int x = 1;
	int y = 1;
	string s1 = "";
	for (char c : s) {
		if (c == '-')x = -1;
		else if (c == '+') x = 1;
		else s1 = c + s1;
	}
	//cout << s1 << "\n";
	for (char c : s1) {
		answer += (c-48) * y;
		//cout << answer<<"\n";
		y *= 10;
	}
	if (x == -1) answer *= -1;
	cout << answer;
}

*/