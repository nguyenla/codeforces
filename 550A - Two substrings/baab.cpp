#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    int l = line.size();
    int print = 0;
    int check = 0;
    int first = 0;
    int i = 0;
        while (i < l-2 && !first) {
            if (line.at(i) == 'A' && line.at(i+1) =='B') {
                check++;
                first = 1;
            }
            i++;
        }
        i++;
        while (i < l-1) {
            if (line.at(i) == 'B' && line.at(i+1) == 'A') {
                check++;
            }
            i++;
        }

    if (check  >= 2) {
        printf("YES");
        print = 1;
    }

    check = 0;
    first = 0;
    i = 0;
        while (i < l-2 && !first) {
            if (line.at(i) == 'B' && line.at(i+1) =='A') {
                check++;
                first = 1;
            }
            i++;
        }
        i++;
        while (i < l-1) {
            if (line.at(i) == 'A' && line.at(i+1) == 'B') {
                check++;
            }
            i++;
        }

    if (check  >= 2 && !print) {
        printf("YES");
        print = 1;
    }

    if (print == 0) {
        printf("NO");
    }
    return 0;
}
