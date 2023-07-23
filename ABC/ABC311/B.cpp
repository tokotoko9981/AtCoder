#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int N, D;

    cin >> N >> D;

    vcc S(N, vc(D));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < D; j++) {
            cin >> S.at(i).at(j);
        }
    }

    int count = 0;
    int ans = 0;
    int tmp = 0;

    for(int i = 0; i < D; i++) {
        for(int j = 0; j < N; j++) {

            if(S.at(j).at(i) == 'o') count++;

        }
        if(count == N) {
            ans++;
        }
        else {
            if(tmp < ans) tmp = ans;
            ans = 0;
        }
        count = 0;
    }


    cout << max(tmp,ans) << endl;
}
