#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


int main(void){

    int N, M;

    cin >> N >> M;

    vcc S(N, vc(M));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> S.at(i).at(j);
        }
    }

    vector<pair<int, int>> ans;

    int count;

    for(int i = 0; i <= N - 9; i++) {
        for(int j = 0; j <= M - 9; j++) {

            count = 0;

            for(int k = i; k < i + 9; k++) {
                for (int l = j; l < j + 9; l++) {

                    if (k < i + 3 && l < j + 3) {
                        if (S.at(k).at(l) == '#') count++;
                    }
                    if (k == i + 3 && l == j + 3) {
                        if (S.at(k).at(l) == '.') count++;
                    }
                    if (k < i + 3 && l == j + 3) {
                        if (S.at(k).at(l) == '.') count++;
                    }
                    if (k == i + 3 && l < j + 3) {
                        if (S.at(k).at(l) == '.') count++;
                    }
                    if (k == i + 5 && l == j + 5) {
                        if (S.at(k).at(l) == '.') count++;
                    }
                    if (k > i + 5 && l == j + 5) {
                        if (S.at(k).at(l) == '.') count++;
                    }
                    if (k == i + 5 && l > j + 5) {
                        if (S.at(k).at(l) == '.') count++;
                    }
                    if (k > i + 5 && l > j + 5) {
                        if (S.at(k).at(l) == '#') count++;
                    }

                }
            }

            if(count == 32) ans.push_back(make_pair(i + 1, j + 1));

        }
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans.at(i).first << " " << ans.at(i).second << endl;
    }



    return 0;
}
