#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


int main(void){

    int N, A, X, Y;

    cin >> N >> A >> X >> Y;

    int ans = 0;

    for(int i = 0; i < N; i++) {
        if(i < A) ans += X;
        else ans += Y;
    }

    cout << ans << endl;

    return 0;
}
