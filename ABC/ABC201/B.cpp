#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int N;

    cin >> N;

    vector<pair<int, string>> ST(N);

    for(int i = 0; i < N; i++) {
        cin >> ST.at(i).second >> ST.at(i).first;
    }

    sort(ST.begin(), ST.end());

    cout << ST.at(N - 2).second << endl;


    return 0;
}