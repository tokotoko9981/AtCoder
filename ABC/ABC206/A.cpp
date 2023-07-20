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

    if(N < 191) cout << "Yay!" << endl;
    else if(N > 191) cout << ":(" << endl;
    else cout << "so-so" << endl;

    return 0;
}

