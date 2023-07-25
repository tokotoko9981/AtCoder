#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;


bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}


int main(void){

    ll N, K;

    cin >> N >> K;

    vector<pair<ll, ll>> A(N);
    vector<pair<ll, ll>> ans(N);

    for(ll i = 0; i < N; i++) {
        cin >> A.at(i).first;
        A.at(i).second = K / N;
        ans.at(i).first = A.at(i).first;
        ans.at(i).second = i;
    }

    sort(A.begin(), A.end());
    sort(ans.begin(), ans.end());

    for(ll i = 0; i < K % N; i++) {
        A.at(i).second += 1;
    }

    for(ll i = 0; i < N; i++) {
        ans.at(i).first = A.at(i).second;
    }

    sort(ans.begin(), ans.end(), compare_by_b);

    for(ll i = 0; i < N; i++) {
        cout << ans.at(i).first << endl;
    }

    return 0;
}
