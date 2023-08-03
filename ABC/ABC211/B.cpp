#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    vs S(4);

    for(int i = 0; i < 4; i++) {
        cin >> S.at(i);
    }

    sort(S.begin(), S.end());


    if(S.at(0) == "2B" && S.at(1) == "3B" && S.at(2) == "H" && S.at(3) == "HR") cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
