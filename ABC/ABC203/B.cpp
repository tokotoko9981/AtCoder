#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int N, K;

    cin >> N >> K;

    int ans = 0;

    for(int i = N; i > 0; i--){
        for(int j = K; j > 0; j--){
            ans += i * 100 + j;
        }
    }

    cout << ans << endl;

    return 0;
}

