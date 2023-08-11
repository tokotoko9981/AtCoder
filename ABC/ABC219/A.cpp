#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int X;
    cin >> X;

    if(X >= 90) cout << "expert" << endl;
    else if(X >= 70) cout << 90 - X << endl;
    else if(X >= 40) cout << 70 - X << endl;
    else  cout << 40 - X << endl;

    return 0;
}
