#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    vi P(26);
    vc A(26);

    for(int i = 0; i < 26; i++) {
        cin >> P.at(i);
        A.at(i) = 'a' + i;
    }

    for(int i = 0; i < 26; i++) {
        cout << A.at(P.at(i) - 1);
    }

    cout << endl;



    return 0;
}
