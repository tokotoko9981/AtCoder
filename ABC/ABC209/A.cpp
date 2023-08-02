#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


int main(void){

    int A, B;

    cin >> A >> B;

    if(A > B) cout << 0 << endl;
    else cout << B - A + 1 << endl;

    return 0;
}
