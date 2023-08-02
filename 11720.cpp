#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x = 0;
    std::cin >> x;
    string s1;
    std::cin >> s1;
    int sum = 0;
    for (int i = 0; i < x; i++) {
        char c = s1[i];
        int a = int(c) - 48;
        sum += a;
    }
    printf("%d", sum);
    return 0;
}