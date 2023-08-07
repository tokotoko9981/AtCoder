#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    ll N;

    cin >> N;

    ll tmp = 1;

    for(int i = 0; i < 100; i++) {
        if(N < tmp) {
            cout << i - 1 << endl;
            exit(0);
        }
        tmp *= 2;
    }

    return 0;
}
