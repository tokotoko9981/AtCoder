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

    if(A <= B && A * 6 >= B) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
