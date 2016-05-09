#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void right(string text) {
    int l = text.size();
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < l; ++i) {
        int x = kb.find(text.at(i));
        char c = kb.at(x-1);
        printf("%c", c);
    }
}

void left(string text) {
    int l = text.size();
    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < l; ++i) {
        int x = kb.find(text.at(i));
        char c = kb.at(x+1);
        printf("%c", c);
    }
}
int main() {
    string l1,text;
    getline(cin, l1);
    getline(cin, text);
    if (l1 == "R") {
        right(text);
    }
    else {
        left(text);
    }
    return 0;
}
