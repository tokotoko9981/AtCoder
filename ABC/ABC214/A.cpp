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

    if(N <= 125) cout << 4 << endl;
    else if(N <= 211) cout << 6 << endl;
    else cout << 8 << endl;

    return 0;
}
