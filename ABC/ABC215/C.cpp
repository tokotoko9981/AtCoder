#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    string S;
    int K;

    cin >> S >> K;

    sort(S.begin(), S.end());

    for(;K > 1; K--) {
        next_permutation(S.begin(), S.end());
    }

    cout << S << endl;

    return 0;
}
