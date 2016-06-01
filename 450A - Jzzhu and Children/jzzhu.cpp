#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n,m,x;
    queue<int> s, order;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        order.push(i);
        s.push(x);
    }

    int last = 0;
    while (!s.empty()) {
        int temp = s.front();
        last = order.front();
        s.pop();
        order.pop();
        if (temp - m > 0) {
            temp -= m;
            s.push(temp);
            order.push(last);
        }
    }
    cout << last+1 << endl;

    return 0;
}
