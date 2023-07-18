#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int x, y, z;

    cin >> x >> y;

    if(x == y) z = x;
    else if(x + y == 3) z = 0;
    else if(x + y == 2) z = 1;
    else z = 2;

    cout << z << endl;

    return 0;
}
