#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    int found = 0;
    getline(cin, x);
    int l = x.size();
    int i =0;
    for (i = 0; i < l; ++i) {
        if (x.at(i) =='h') {
            ++i;
            for (; i <l ;++i) {
                if (x.at(i) =='e') {
                    ++i;
                    for (; i <l ;++i) {
                        if (x.at(i) =='l') {
                            ++i;
                            for (; i <l ;++i) {
                                if (x.at(i) =='l') {
                                    ++i;
                                    for (; i <l ;++i) {
                                        if (x.at(i) =='o') {
                                            printf("YES");
                                            found =1;
                                            i = l+1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (found == 0) {
        printf("NO");
    }

    return 0;
}
