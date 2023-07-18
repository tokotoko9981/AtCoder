#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int N;

    cin >> N;

    vi A(N);

    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int ans = 0;

    for(int i = 0; i < N; i++) {
        if(A.at(i) > 10) ans += A.at(i) - 10;
    }

    cout << ans << endl;

    return 0;
}

