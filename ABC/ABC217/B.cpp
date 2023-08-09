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
    vs A = { "ABC", "AGC", "AHC", "ARC" };

    cin >> S.at(0) >> S.at(1) >> S.at(2);

    vector<bool> check = { true, true, true, true };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            if(S.at(i) == A.at(j)) {
                check.at(j) = false;
            }
        }
    }

    for(int i = 0; i < 4; i++) {
        if(check.at(i)) cout << A.at(i) << endl;
    }

    return 0;
}
