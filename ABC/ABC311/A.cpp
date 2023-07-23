#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    string S;
    int N;
    cin >> N;

    cin >> S;

    bool A = false, B = false, C = false;

    for(int i = 0; i < N; i++) {
        if(S.at(i) == 'A') A = true;
        if(S.at(i) == 'B') B = true;
        if(S.at(i) == 'C') C = true;

        if(A && B && C) {
            cout << i + 1 << endl;
            break;
        }
    }



    return 0;
}
