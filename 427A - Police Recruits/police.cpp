#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    scanf("%d", &n);
    int numPol = 0;
    int res = 0;
    for (int i =0; i <n; ++i) {
        scanf("%d", &x);
        if (x!=-1) {
            numPol +=x;
        }
        else if (x == -1 && numPol==0) {
           res++;
        }
        else {
           numPol--;
        }
    }
    printf("%d", res);
    return 0;
}
