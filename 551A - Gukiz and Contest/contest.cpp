#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int rating[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &rating[i]);
    }

    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = 0; j < n; ++j) {
            if (rating[j] > rating[i]) {
                count++;
            }
        }
        cout << count << " ";
    }
    return 0;
}
