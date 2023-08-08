#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    double XY;

    cin >> XY;

    int tmp = XY * 10;

    if(tmp % 10 <= 2) cout << tmp / 10 << "-" << endl;
    else if(tmp % 10 <= 6) cout << tmp / 10 << endl;
    else cout << tmp / 10 << "+" << endl;

    return 0;
}
