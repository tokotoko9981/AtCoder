#include <bits/stdc++.h>
using namespace std;
using v = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int N, M;

    cin >> N >> M;

    v P(N), C(N);

    vcc F(N);

    int in;

    for(int i = 0; i < N; i++){
        cin >> P.at(i) >> C.at(i);
        for(int j = 0; j < C.at(i); j++) {
            cin >> in;
            F.at(i).push_back(in);
        }
    }

    int count;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            count = 0;
            if(P.at(i) >= P.at(j)) {
                for(int k = 0; k < C.at(i); k++){
                    for(int l = 0; l < C.at(j); l++){
                      if(F.at(i).at(k) == F.at(j).at(l)) count++;
                    }
                }
                if(count >= C.at(i)) {
                    if(P.at(i) > P.at(j) || C.at(i) < C.at(j)) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    
    cout << "No" << endl;
    
    return 0;
}
