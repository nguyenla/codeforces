#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

bool isDigit(char c) {
    if ((c-'0') < 10) {
        return true;
    }
    else {
        return false;
    }
}

int pow(int a, int b) {
    if (b == 0) {
        return 1;
    }
    else {
        return a*pow(a,b-1);
    }
}

int stringToInt(string input) {
    int l = input.size();
    int num = 0;
    for (int i = 0; i < l; ++i) {
        num += pow(10,l-i-1) * (input.at(i) - '0');
    }
    return num;
}

string encode(int num) {
    vector<char> v;
    while (num > 0) {
        int r = num % 26;
        if (r == 0) {
            v.push_back('Z');
            num = num / 26 - 1;
        }
        else {
            char c = 'A' + r - 1;
            v.push_back(c);
            num = num / 26;
        }
    }
    stringstream ss;
    int s = v.size();
    for (int i = s-1; i >= 0; --i) {
        ss << v.at(i);
    }
    string res;
    ss >> res;
    return res;
}

void convert1(string input) {
    string cols;
    int i = 0;
    int l = input.size();
    string c,r;
    stringstream temp1, temp2;
    while (!isDigit(input.at(i))) {
        temp1 << input.at(i);
        ++i;
    }
    while (i < l) {
        temp2 << input.at(i);
        ++i;
    }
    temp1 >> c;
    temp2 >> r;

    int num = 0;
    l = c.size();
    for (int i = 0; i < l;++i) {
        num += pow(26, l - 1 - i)*(c.at(i) - 'A'+1);
    }
    cout << "R" << r << "C" << num << endl;
}

void convert2(string input) {
    stringstream temp1, temp2;
    string r,c;
    int i = 1;
    int l = input.size();
    while (input.at(i) != 'C') {
        temp1 << input.at(i);
        ++i;
    }
    ++i;
    while (i < l) {
        temp2 << input.at(i);
        ++i;
    }
    temp1 >> r;
    temp2 >> c;
    string x = encode(stringToInt(c));
    cout << x << r << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(10000,'\n');
    string line;
    for (int i = 0; i < n; ++i) {
        getline(cin, line);
        if (line.at(0) != 'R') {
            convert1(line);
        }
        else if (!isDigit(line.at(1))) {
            convert1(line);
        }
        else {
            bool check = true;
            for (int j = 1; j < line.size(); ++j) {
                if (line.at(j) == 'C') {
                    check = false;
                    break;
                }
            }

            if (check) {
                convert1(line);
            }
            else {
                convert2(line);
            }
        }
    }
    return 0;
}
