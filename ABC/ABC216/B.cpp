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

    vs S(N), T(N);

    for(int i = 0; i < N; i++) {
        cin >> S.at(i) >> T.at(i);
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i < j && S.at(i) == S.at(j) && T.at(i) == T.at(j)) {
                cout << "Yes" << endl;
                exit(0);
            }
        }
    }

    cout << "No" << endl;

    return 0;
}
