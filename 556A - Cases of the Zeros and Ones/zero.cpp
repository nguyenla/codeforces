#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int n,res;
    scanf("%d", &n);
    cin.ignore(10000, '\n');
    string line;
    getline(cin, line);
    int num0 = 0;
    int num1 = 0;
    for (int i = 0; i < n; ++i) {
        if (line.at(i) == '1') {
            num1++;
        }
        else {
            num0++;
        }
    }
    res = abs(num1-num0);
    printf("%d", res);
    return 0;
}
