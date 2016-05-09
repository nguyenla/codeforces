#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    string word2;
    getline(cin, word);
    getline(cin, word2);
    int l = word.size();
    int n = word2.size();
    int check = 1;
    if (l!= n) {
        check =0;
    }
    else {
    for (int i = 0; i< l; ++i) {
        if (word.at(i) != word2.at(l-i-1)) {
//            printf("%d",i);
            check = 0;
            break;
        }
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
