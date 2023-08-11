#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    vs S(3);

    for(int i = 0; i < 3; i++) {
        cin >> S.at(i);
    }

    string T;

    cin >> T;

    for(int i = 0; i < T.size(); i++) {
        cout << S.at(T.at(i) - '1');
    }

    cout << endl;

    return 0;
}
