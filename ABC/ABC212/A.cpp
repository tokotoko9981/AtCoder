#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int A, B;

    cin >> A >> B;

    if(A > 0 && B > 0) cout << "Alloy" << endl;
    else if(A == 0) cout << "Silver" << endl;
    else cout << "Gold" << endl;

    return 0;
}
