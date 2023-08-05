#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){


    int N, M;

    cin >> N >> M;

    vi A(M), B(M);

    for(int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    vi P(N, 0);

    for(int i = 0; i < M; i++) {
        P.at(B.at(i) - 1)--;
    }

    int saikyo = -1;

    for(int i = 0; i < N; i++) {
        if(P.at(i) == 0) {
            if(saikyo != -1) {
                cout << "-1" << endl;
                exit(0);
            }
            saikyo = i;
        }
    }

    cout << saikyo + 1 << endl;



    return 0;
}
