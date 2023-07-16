#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int N, P, Q;
    cin >> N >> P >> Q;

    v D(N);

    for(int i = 0; i < N; i++) {
        cin >> D.at(i);
    }

    sort(D.begin(), D.end());

    if(D.at(0) + Q <= P) cout << D.at(0) + Q << endl;
    else cout << P << endl;



    return 0;
}
