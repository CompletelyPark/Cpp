#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];

    if (arr.size() == 1) { 
        answer.push_back(-1); 
        return answer;
    }
    else {
        for (int i : arr) {
            if (min > i) min = i;
        }

        remove(arr.begin(), arr.end(), min);
        return arr;
    }
}