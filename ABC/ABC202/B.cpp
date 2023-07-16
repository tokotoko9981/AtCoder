#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    string S;

    cin >> S;

    reverse(S.begin(), S.end());

    for(int i = 0; i < S.size(); i++) {
        if(S.at(i) == '6') S.at(i) = '9';
        else if(S.at(i) == '9') S.at(i) = '6';
    }

    cout << S << endl;
    return 0;
}

