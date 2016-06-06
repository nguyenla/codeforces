#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k*l;
    int slices = c*d;
    int toast = p/(np*n);
    toast = min(toast, slices/n);
    toast = min(toast, drink / (nl*n));
    cout << toast << endl;
    return 0;
}
