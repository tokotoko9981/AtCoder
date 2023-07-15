#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    v A(3);

    cin >> A.at(0) >> A.at(1) >> A.at(2);

    bool ans = false;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            swap(A.at(i), A.at(j));
            if(A.at(2) - A.at(1) == A.at(1) - A.at(0)) ans = true;
            swap(A.at(i), A.at(j));
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}