#include<iostream>
using namespace std;

int main() {
    long long int m,n,a,x;
    scanf("%lli", &m);
    scanf("%lli", &n);
    scanf("%lli", &a);
    x = ((m+a-1)/a)*((n+a-1)/a);
//    x = 1000000000000000000;
    printf("%lli",x); 
    return 0;
}
