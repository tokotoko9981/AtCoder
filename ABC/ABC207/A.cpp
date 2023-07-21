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

    cout << A + B + C - min({A, B, C}) << endl;

    return 0;
}
