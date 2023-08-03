#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int N, M;

    cin >> N >> M;

    vector<pair<int, char>> A(N + M);

    for(int i = 0; i < N + M; i++) {
        cin >> A.at(i).first;
        if(i < N) A.at(i).second = 'A';
        else A.at(i).second = 'B';
    }

    sort(A.begin(), A.end());

    ll ans = 100000000000;
    ll tmp;

    for(int i = 0; i < N + M - 1; i++) {
        if(A.at(i).second != A.at(i + 1).second) {
            tmp = A.at(i + 1).first - A.at(i).first;
        }
        if(tmp < ans) ans = tmp;
    }

    cout << ans << endl;

    return 0;
}
