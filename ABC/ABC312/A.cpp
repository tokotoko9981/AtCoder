#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


int main(void){

    string S;

    cin >> S;

    if(S == "ACE" || S == "BDF" || S == "CEG" || S == "DFA" || S == "FAC" || S == "EGB" || S == "GBD") {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

    return 0;
}
