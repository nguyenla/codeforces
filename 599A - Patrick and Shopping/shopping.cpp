#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long a,b,c;
    cin >> a >> b >> c;
    long optimum = a + b + c;
    optimum = min(optimum, a*2 + b*2);
    optimum = min(optimum, a*2 + c*2); 
    optimum = min(optimum, b*2 + c*2); 
    cout << optimum << endl;
    return 0;
}
