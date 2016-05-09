#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,numA,numB,numC,x;
    numA = 0;
    numB = 0;
    numC = 0;
    vector<int> a,b,c;
    scanf("%d", &n);
    for (int i = 1; i<=n; ++i) {
        scanf("%d", &x);
        if (x == 1) {
            a.push_back(i);
            numA++;
        }
        else if (x == 2) {
            b.push_back(i);
            numB++;
        }
        else {
            c.push_back(i);
            numC++;
        }
    }
    int curMin = min(numA, numB);
    curMin = min(curMin, numC);
    printf("%d", curMin);
    if (curMin != 0) {
        printf("\n");
        int iA=0;
        int iB=0;
        int iC=0;
        for (int i = 0; i < curMin; ++i) {
            printf("%d %d %d", a.at(iA), b.at(iB), c.at(iC));
            iA++;
            iB++;
            iC++;
            if (i != curMin-1) {
                printf("\n");
            }
        }
    }

    return 0;
}
