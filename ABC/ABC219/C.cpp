#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    string X;
    cin >> X;

    int N;
    cin >> N;

    vector<pair<string, string>> S(N);

    for(int i = 0; i < N; i++) {
        cin >> S.at(i).second;
        S.at(i).first = S.at(i).second;
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < S.at(i).second.size(); j++) {
            for(int k = 0; k < 26; k++) {
                if(S.at(i).second.at(j) == X.at(k)) {
                    S.at(i).first.at(j) = 'a' + k;
                }
            }
        }
    }

    sort(S.begin(), S.end());

    for(int i = 0; i < N; i++) {
        cout << S.at(i).second << endl;
    }

    return 0;
}
