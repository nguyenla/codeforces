#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void convert(int num, int res[]) {
    fill(res, res+25,0);
    int i = 0;
    while (num != 0) {
        res[i] = num%2;
        num = num/2;
        i++;
    }
}

int isFriend(int a[], int b[], int k) {
    int diff = 0;
    for (int i = 0; i < 25; ++i) {
        if (a[i] != b[i]) {
            diff++;
        }
    }
    if (diff > k) {
        return 0;
    }
    else {
        return 1;
    }
}

int main() {
    int n,m,k,f;
    cin >> n >> m >> k;
    int array[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d",&array[i]);
    }
    cin >> f;
    int y[25];
    convert(f, y);
    int friends = 0;
    for (int i = 0; i < m; ++i) {
        int res[25];
        convert(array[i], res);
        if (isFriend(res, y, k)) {
            friends++;
        }
    }
    cout << friends << endl;
    return 0;
}
