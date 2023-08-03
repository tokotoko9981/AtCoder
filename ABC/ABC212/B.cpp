#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    string S;

    cin >> S;

    vi X(4);

    for(int i = 0; i < 4; i++) {
        X.at(i) = S.at(i) - '0';
    }

    if(X.at(0) == X.at(1) && X.at(1) == X.at(2) && X.at(2) == X.at(3)) {
        cout << "Weak" << endl;
        exit(0);
    }

    int count = 0;

    for(int i = 0; i < 3; i++) {
        if((X.at(i) + 1) % 10 == X.at(i + 1) % 10) count++;
    }

    if(count == 3) {
        cout << "Weak" << endl;
        exit(0);
    }

    cout << "Strong" << endl;

    return 0;
}
