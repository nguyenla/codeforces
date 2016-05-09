#include <iostream>
#include <string>

using namespace std;

int main() {
    int n,a,x;
    scanf("%d",&n);
    int friends[n+1];
    int rev[n+1];
    for (int i =1; i<=n;++i) {
        scanf("%d", &a);
        friends[i] = a;
    }

    for (int i =1; i<=n;++i) {
        rev[friends[i]] = i;
    }
    
    for (int i =1; i<n;++i) {
        printf("%d ",rev[i]);
    }
    printf("%d", rev[n]);
    return 0;
}
