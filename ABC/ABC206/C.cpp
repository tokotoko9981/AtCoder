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

    long int ans = 0;

    for(int i = N - 1; i > 0; i--) {
        ans += i;
    }

    sort(A.begin(), A.end());


    int minus = 1;

    for(int i = 0; i < N - 1; i++) {

        if(A.at(i) == A.at(i + 1)) {
            ans -= minus;
            minus++;
        }
        else minus = 1;

    }

    cout << ans << endl;

    return 0;
}

