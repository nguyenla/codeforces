#include <iostream>
#include <string>

using namespace std;

int check(int n) {
    string s = to_string(n);
    if (s.at(0) != s.at(1) && s.at(0) != s.at(2) && s.at(0) != s.at(3) && s.at(1) != s.at(2) && s.at(1) != s.at(3) && s.at(2) != s.at(3)) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int x;
    scanf("%d", &x);
    x+=1;
    while (!check(x)) {
        x+=1;
    }
    printf("%d",x);
    return 0;
}
