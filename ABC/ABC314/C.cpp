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

    int N, M;
    cin >> N >> M;

    string S;
    cin >> S;

    vi C(N);

    rep(i, N) {
        cin >> C.at(i);
    }

    vcc dif(N);

    for(int i = 0; i < N; i++) {
        dif.at(i).push_back('!');
    }


    for(int i = 0; i < N; i++) {
        dif.at(C.at(i) - 1).push_back(S.at(i));
    }

    for(int i = 0; i < N; i++) {
        dif.at(i).at(0) = dif.at(i).at(dif.at(i).size() - 1);
    }


    vi pop(N, 0);

    for(int i = 0; i < N; i++) {
        cout << dif.at(C.at(i) - 1).at(pop.at(C.at(i) - 1));
        pop.at(C.at(i) - 1)++;
    }

    cout << endl;


    return 0;
}
