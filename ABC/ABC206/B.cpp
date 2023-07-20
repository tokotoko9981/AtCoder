#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    int N;

    cin >> N;

    int money = 0;

    int i;

    for(i = 0; money < N; i++) {
        money += i;
    }

    cout << i - 1 << endl;

    return 0;
}

