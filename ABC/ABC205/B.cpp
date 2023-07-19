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

    sort(A.begin(), A.end());
    bool ans = false;

    for(int i = 0; i < N - 1; i++) {
        if(A.at(i) + 1 != A.at(i + 1)) ans = true;
    }

    if(ans) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}

