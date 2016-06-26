#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min1,max1,min2,max2,min3,max3;
    cin >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;
    int temp = min2 + min3;
    int a = min(n-temp, max1);
    n = n - a;
    int b = min(n-min3, max2);
    int c= n - b;
    cout << a << " " << b << " " << c << endl;
    return 0;
}
