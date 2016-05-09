#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m,n,x;
    scanf("%d", &n);
    scanf("%d", &m);
    int win[n+1];
    fill(win, win+n+1,0);
    for (int i = 0; i < m; ++i) {
        int winner = 1;
        int highest;
        scanf("%d", &highest);
        for (int j = 2; j <=n; ++j) {
           scanf("%d",&x);
          if (x > highest) {
             highest = x;
             winner = j;
          }
        }
        win[winner]++;
    }
    int best = 1;
    int highestVote = win[1];
    for (int i = 2; i <=n; ++i) {
        if (win[i] > highestVote) {
            best = i;
            highestVote = win[i];
        }
    }

    printf("%d", best);

    return 0;
}
