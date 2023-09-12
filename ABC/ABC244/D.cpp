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

    char S1, S2, S3, T1, T2, T3;

    cin >> S1 >> S2 >> S3 >> T1 >> T2 >> T3;

    bool check = false;

    if(S1 == T1 && S2 == T2 && S3 == T3) check = true;

    swap(T1, T2);
    swap(T2, T3);

    if(S1 == T1 && S2 == T2 && S3 == T3) check = true;

    swap(T1, T2);
    swap(T2, T3);

    if(S1 == T1 && S2 == T2 && S3 == T3) check = true;

    swap(T1, T2);
    swap(T2, T3);

    if(check) pyes;
    else pno;

    return 0;
}
