#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


int main(void){

    int N, X;

    cin >> N >> X;

    vi A(N);

    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int P = 0;

    for(int i : A) {
        P += i;
    }

    P -= N / 2;

    if(X >= P) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
