#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int code[n], first[n-1], second[n-2];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &code[i]);
    }
    for (int i = 0; i < n-1; ++i) {
        scanf("%d", &first[i]);
    }
    for (int i = 0; i < n-2; ++i) {
        scanf("%d", &second[i]);
    }
    vector<int> a(code, code + n);
    vector<int> b(first, first + (n-1));
    vector<int> c(second, second + (n-2));
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int found = 0;
    for (int i = 0; i < n-1; ++i) {
        if (a.at(i) != b.at(i)) {
            printf("%d\n", a.at(i));
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("%d\n",a.at(n-1));
    }

    found = 0;
    for (int i = 0; i < n-2; ++i) {
        if (b.at(i) != c.at(i)) {
            printf("%d\n", b.at(i));
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("%d\n",b.at(n-2));
    }
    return 0;
}
