#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;

#define rep(o, i, n) for (ll i = o; i < (n); i++)
#define rrep(o, i, n) for (ll i = o; i >= (n); i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define FI first
#define SE second
#define pyes cout << "Yes\n"
#define pno cout << "No\n"


void setup(){
#ifdef LOCAL
    ifstream inputFile("input.txt");
        cin.rdbuf(inputFile.rdbuf());
#else
    cin.tie(0); ios::sync_with_stdio(0);
#endif
    cout<<fixed<<setprecision(10);
}


int main(void){

    int M, D;
    cin >> M >> D;

    int y, m, d;
    cin >> y >> m >> d;

    if(m == M && d == D) {
        cout << y + 1 << " " << 1 << " " << 1;
    }
    else if(d == D) {
        cout << y << " " << m + 1 << " " << 1;
    }
    else {
        cout << y << " " << m << " " << d + 1;
    }

    cout << endl;

    return 0;
}
