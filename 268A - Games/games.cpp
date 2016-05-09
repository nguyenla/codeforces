#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,x,sum;
    int home[101];
    int away[101];
    fill(home, home+101,0);
    fill(away, away+101,0);
    scanf("%d",&n);
    for (int i = 0; i < 2*n; ++i) {
        scanf("%d",&x);
        if (i%2 == 0) {
            home[x]++;
        }
        else {
            away[x]++;
        }
    }

    sum = 0;
    for (int i = 0; i < 101; ++i) {
        sum+= home[i]*away[i];
    }
    printf("%d",sum);

    return 0;
}
