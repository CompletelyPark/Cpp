#include <stdio.h>
#include <iostream>
#include <algorithm>

int main()
{
	int x, y, z;
	int ans;
	std::cin >> x >> y >> z;
	if (x == y && y == z) ans = 10000 + x * 1000;
	else {
		if (x == y) ans = 1000 + x * 100;
		else if(y == z) ans = 1000 + y * 100;
		else if(z == x) ans = 1000 + x * 100;
		else {
			ans = std::max({ x,y,z }) * 100;
		}
	}
	std::cout << ans;
	return 0;
}