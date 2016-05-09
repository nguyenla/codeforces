#include <iostream>
using namespace std;

int main() {
    int n,k,count,m;
    scanf("%d", &n);
    scanf("%d", &k);
    cin.ignore(10000,'\n');
    m = 0;
    count = 0;
    for (int i = 0; i< n;++i) {
            int p;
            scanf("%d", &p);
            if (p == 0) {
                break;
            }
            else if (count < k-1) {
                count++;
            }
            else if (count == k-1) {
                count++;
                m = p;
            }
            else {
                if (p == m) {
                    count++;
                }
                else {
                    break;
                }
            }
    }
    printf("%d", count);
    return 0;
}
