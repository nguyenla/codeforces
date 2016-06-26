#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int array[100];
    fill(array, array+100,0);
    int i = 0;
    for (int j = 1; j < 100; ++j) {
        while (array[i] != 0) {
            i = (i+1)%100;
        }
        i = (i+1)%100;

        while (array[i] != 0) {
            i = (i+1)%100;
        }
        array[i]++;
    }
    for (int k = 0; k < 100; ++k) {
        if (array[k] == 0) {
            cout << k << endl;
        }
    }

    return 0;
}
