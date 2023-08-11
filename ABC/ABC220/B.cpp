#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    ll K, A, B;

    cin >> K >> A >> B;

    ll a = 0, b = 0;

    ll bi = 1;

    while(A > 0) {
        a += (A % 10) * bi;
        A /= 10;
        bi *= K;
    }

    bi = 1;

    while(B > 0) {
        b += (B % 10) * bi;
        B /= 10;
        bi *= K;
    }

    cout << a * b << endl;

    return 0;
}
