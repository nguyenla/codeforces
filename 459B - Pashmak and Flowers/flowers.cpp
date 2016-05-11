#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n,x;
    cin >> n;
    vector<long long> beauties;
    for (long long i = 0; i < n; ++i) {
        cin >> x;
        beauties.push_back(x);
    }
    sort(beauties.begin(), beauties.end());
    long long min = beauties.at(0);
    long long max = beauties.at(n-1);
    long long ways;
    if (min == max) {
        ways = n*(n-1)/2;
    }
    else {
        long long countmin = 0;
        long long countmax = 0;
        long long i = 0;
        while (i<n) {
           if (beauties.at(i) == min) {
              countmin++;
             i++;
           }
           else {
               break;
           }
        }
        i = n-1; 
        while (i >= 0) {
           if (beauties.at(i) == max) {
              countmax++;
             i--;
           }
           else {
               break;
           }
        }
        ways = countmin * countmax;
    }
    cout << max - min << " " << ways << endl;

    return 0;
}
