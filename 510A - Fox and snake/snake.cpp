#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for (int i = 0; i < a; ++i) {
        if (i % 2 ==0) {
            for (int j = 0; j< b; ++j) {
                printf("#");
            }
            printf("\n");
        }
        else if ((i-1)%4 == 0) {
            for (int j = 0; j< b-1; ++j) {
                printf(".");
            }
            printf("#\n");
        }
        else {
            printf("#");
            for (int j = 0; j< b-1; ++j) {
                printf(".");
            }
            printf("\n");
        }
    }

    return 0;
}
