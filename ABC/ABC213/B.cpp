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
    vi A(N), B(N);

    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
        B.at(i) = A.at(i);
    }

    sort(B.begin(), B.end());

    int boo = B.at(N - 2);

    for(int i = 0; i < N; i++) {
        if(A.at(i) == boo) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
