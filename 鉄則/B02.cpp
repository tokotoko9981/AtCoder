#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl




int main(void){

    int A, B;
    cin >> A >> B;

    bool check = false;

    for(int i = A; i <= B; i++) {
        if(100 % i == 0) check = true;
    }

    if(check) pyes;
    else pno;

    return 0;
}
