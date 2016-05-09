#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string line;
    string board[8];
    int a,b;
    a = 0;
    b = 0;
    for (int i = 0; i<8; ++i) {
        getline(cin, line);
        for (int j = 0; j<8; ++j) {
            char x = line.at(j);
            if (x == 'Q') {
                a+=9;
            }
            else if (x == 'q') {
                b+=9;
            }
            else if (x == 'R') {
                a+=5;
            }
            else if (x == 'r') {
                b+=5;
            }
            else if (x == 'B' || x == 'N') {
                a+=3;
            }
            else if (x == 'b' || x == 'n') {
                b+=3;
            }
            else if (x == 'P') {
                a+=1;
            }
            else if (x == 'p') {
                b+=1;
            }
        }
    }
    if (a > b) {
        printf("White");
    }
    else if (a < b) {
        printf("Black");
    }
    else {
        printf("Draw");
    }
    return 0;
}
