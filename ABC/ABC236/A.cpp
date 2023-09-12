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
#define pyes cout << "Yes\n"
#define pno cout << "No\n"




int main(void){

    string S;
    cin >> S;

    int A, B;
    cin >> A >> B;

    char tmp = S.at(A - 1);
    S.at(A - 1) = S.at(B - 1);
    S.at(B - 1) = tmp;

    cout << S << endl;


    return 0;
}
