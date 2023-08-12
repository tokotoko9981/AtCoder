#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define FI first
#define SE second
#define pyes cout << "Yes" << endl
#define pno cout << "No" << endl


int main(void){

    int N;

    cin >> N;

    vi C(N);
    vii A(N);

    int tmp;

    for(int i = 0; i < N; i++) {
        cin >> C.at(i);
        for(int j = 0; j < C.at(i); j++) {
            cin >> tmp;
            A.at(i).push_back(tmp);
        }
    }

    int X;
    cin >> X;

    int K = 0;
    vi B;
    int min = 38;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < C.at(i); j++) {
            if(A.at(i).at(j) == X && C.at(i) < min) {
                min = C.at(i);
                break;
            }
        }
    }


    for(int i = 0; i < N; i++) {
        for(int j = 0; j < C.at(i); j++) {
            if(A.at(i).at(j) == X && C.at(i) == min) {
                K++;
                B.push_back(i + 1);
            }
        }
    }

    cout << K << endl;

    for(int i = 0; i < K; i++) {
        cout << B.at(i) << " ";
    }

    cout << endl;

    return 0;
}
