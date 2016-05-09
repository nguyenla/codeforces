#include <iostream>
#include <string>

using namespace std;
int isCaplock(string word) {
    int l = word.size();
    for (int i = 1; i<l;++i) {
        if (islower(word.at(i))) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string word;
    getline(cin, word);
    int l = word.size();
    if (isCaplock(word)) {
        if (isupper(word.at(0))) {
            printf("%c",tolower(word.at(0)));
        }
        else {
            printf("%c",toupper(word.at(0)));
        }
        for (int i = 1; i<l;++i) {
            printf("%c",tolower(word.at(i)));
        }

    }
    else {
        printf("%s",word.c_str());
    }

    return 0;
}
