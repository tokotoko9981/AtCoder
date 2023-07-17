#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    v a(3);

    cin >> a.at(0) >> a.at(1) >> a.at(2);

    if(a.at(0) == a.at(1)) cout << a.at(2) << endl;
    else if(a.at(2) == a.at(1)) cout << a.at(0) << endl;
    else if(a.at(0) == a.at(2)) cout << a.at(1) << endl;
    else cout << 0 << endl;

    return 0;
}
