#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int A, B, C;

    cin >> A >> B >> C;

    if(A < 0 && C % 2 == 0) A *= -1;
    if(B < 0 && C % 2 == 0) B *= -1;

    if(A > B) cout << ">" << endl;
    else if(A < B) cout << "<" << endl;
    else cout << "=" << endl;

    return 0;
}

