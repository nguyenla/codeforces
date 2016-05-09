#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m,n, move;
    move = 0;
    string l1,l2;
    scanf("%d", &n);
    cin.ignore(10000, '\n');
    getline(cin, l1);
    getline(cin, l2);
    for (int i = 0; i < n; ++i) {
        int a = l1.at(i) - '0';
        int b = l2.at(i) - '0';
        if (a >=b) {
            m = min(a-b,10+b-a);
        }
        else {
            m = min(b-a,10+a-b);
        }
        move +=m;
    }
    printf("%d",move);
    return 0;
}
