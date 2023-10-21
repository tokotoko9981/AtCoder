

//
// Created by tokot on 2023/10/21.
//
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(o, i, n) for (ll i = o; i < (n); i++)
#define rrep(o, i, n) for (ll i = o; i >= (n); i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes\n"
#define pno cout << "No\n"




int main(void){

    int A, B, C, D, E, F, X;
    cin >> A >> B >> C >> D >> E >> F >> X;
    int a = A, c = C, d = D, f = F;
    int ta = 0, ao = 0;
    bool bA = true, bD = true;
    rep(0, i, X) {
        if(bA) {
            a--;
            ta += B;
            if(a == 0) {
                bA = false;
                a = A;
            }
        }
        else {
            c--;
            if(c == 0) {
                bA = true;
                c = C;
            }
        }

        if(bD) {
            d--;
            ao += E;
            if(d == 0) {
                bD = false;
                d = D;
            }
        }
        else {
            f--;
            if(f == 0) {
                bD = true;
                f = F;
            }
        }
    }

    if(ao == ta) cout << "Draw" << endl;
    else if(ao > ta) cout << "Aoki" << endl;
    else cout << "Takahashi" << endl;


    return 0;
}
