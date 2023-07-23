#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

set<int> S;
vi ans;
set<int> check;

void dfs(vii &graph, int v) {
    S.insert(v);
    for (auto next_v : graph.at(v)) {
        if(S.count(next_v)) {
            ans.push_back(v);
            check.insert(v);
            if(check.count(next_v)) {
                return;
            }
        }
        dfs(graph, next_v);
    }
}

int main(void){

    int N;

    cin >> N;

    vi A(N);

    for(int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    vii graph(N);

    for(int i = 0; i < N; i++) {
        graph.at(i).push_back(A.at(i) - 1);
    }


    dfs(graph, 0);

    cout << check.size() << endl;

    for(int i = 0; i < ans.size(); i++) {
        cout << ans.at(i) + 1;
        if(i == ans.size() - 1) cout << endl;
        else cout << " ";
    }



    return 0;
}
