#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int A, B, C;

    cin >> A >> B;

    for(C = 0; C < 256; C++) {
        if((A ^ B) == C) {
            cout << C << endl;
            exit(0);
        }
    }

    return 0;
}
