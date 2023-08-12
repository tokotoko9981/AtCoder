#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    string S = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    int N;

    cin >> N;

    for(int i = 0; i < N + 2; i++) {
        cout << S.at(i);
    }

    cout << endl;

    return 0;
}
