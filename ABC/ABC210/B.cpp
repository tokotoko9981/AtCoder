#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


int main(void){

    int N;

    string S;

    cin >> N;
    cin >> S;

    for(int i = 0; i < N; i++) {
        if(S.at(i) == '1') {
            if(i % 2 == 0) {
                cout << "Takahashi" << endl;
                break;
            }
            else {
                cout << "Aoki" << endl;
                break;
            }
        }
    }

    return 0;
}
