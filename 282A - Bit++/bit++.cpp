#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int x = 0;
    scanf("%d", &n);
    cin.ignore(10000,'\n');
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        if (line.at(1) == '+') {
            x++;
        }
        else {
            x--;
        }
    }
    printf("%d", x);
    return 0;
}
