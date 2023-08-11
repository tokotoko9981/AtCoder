#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int A, B, C;

    cin >> A >> B >> C;

    for(int i = A; i <= B; i++) {
        if(i % C == 0) {
            cout << i << endl;
            exit(0);
        }
    }

    cout << -1 << endl;

    return 0;
}
