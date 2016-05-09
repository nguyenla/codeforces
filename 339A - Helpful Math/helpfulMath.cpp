#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int a,b,c;
    a=0;
    b=0;
    c=0;
    getline(cin, line);
    int l = line.size();
    for (int i = 0; i < l; ++i) {
        if (line.at(i) == '1') {
            ++a;
        }
        else if (line.at(i) == '2') {
            ++b;
        }
        else if (line.at(i) == '3') {
            ++c;
        }
    }
    int count = 0;
    for (int j = 0; j < a; ++j) {
        if (count < a+b+c-1) {
            printf("1+");
            count++;
        }
        else {
            printf("1");
            return 0;
        }
    }
    for (int k = 0; k < b; ++k) {
        if (count < a+b+c-1) {
            printf("2+");
            count++;
        }
        else {
            printf("2");
            return 0;
        }
    }
    for (int l = 0; l < c; ++l) {
        if (count < a+b+c-1) {
            printf("3+");
            count++;
        }
        else {
            printf("3");
            return 0;
        }
    }
    return 0;
}
