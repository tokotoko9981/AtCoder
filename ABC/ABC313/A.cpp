#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int N;

    cin >> N;

    vi P(N);

    for(int i = 0; i < N; i++) {
        cin >> P.at(i);
    }

    int POWER = 0;

    for(int i = 1; i < N; i++) {
        if(P.at(0) <= P.at(i) && POWER <= P.at(i) - P.at(0) + 1) POWER = P.at(i) - P.at(0) + 1;
    }

    cout << POWER << endl;

    return 0;
}
