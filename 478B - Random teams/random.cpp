#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long a,b;
    cin >> a >> b;
    long long min, max;
    long long x = a/b;
    long long y = a%b;
    min = y*x*(x+1)/2 + (b-y)*x*(x-1)/2;
    max = (a-b)*(a-b+1)/2;
    cout << min << " " << max << endl;
    return 0;
}
