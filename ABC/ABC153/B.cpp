#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int H, N;

    cin >> H >> N;

    vi A(N);
    int sum = 0;

    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
        sum += A.at(i);
    }

    if(sum >= H) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
