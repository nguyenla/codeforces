#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < m; ++i) {
        string word1, word2;
        cin >> word1 >> word2;
        if (word1.size() > word2.size()) {
            mp[word1] = word2;
            mp[word2] = word2;
        }
        else {
            mp[word1] = word1;
            mp[word2] = word1;
        }
    }
    string word;
    for (int i = 0; i < n-1; ++i) {
        cin >> word;
        cout << mp[word] << " ";
    }
    cin >> word;
    cout << mp[word] << endl;

    return 0;
}
