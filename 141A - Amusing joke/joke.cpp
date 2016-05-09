#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string l1,l2,l3;
    getline(cin, l1);
    getline(cin, l2);
    getline(cin, l3);
    int alpha[26];
    fill(alpha, alpha + 26, 0);
    int check = 1;
    int a1,a2,a3;
    a1 = l1.size();
    a2 = l2.size();
    a3 = l3.size();

    for (int i = 0; i < a1; ++i) {
        int x = l1.at(i) - 'A';
        alpha[x]++;
    }

    for (int i = 0; i < a2; ++i) {
        int x = l2.at(i) - 'A';
        alpha[x]++;
    }

    for (int i = 0; i < a3; ++i) {
        int x = l3.at(i) - 'A';
        alpha[x]--;
    }


    for (int i = 0; i < 26; ++i) {
        if (alpha[i] != 0) {
            check = 0;
        }
    }
    if (check) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
