#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using vs = vector<string>;
using ll = long long;


int main(void){

    int S, T;

    cin >> S >> T;

    int a, b, c;

    int count = 0;

    for(a = 0; a <= 100; a++) {
        for(b = 0; b <= 100; b++) {
            for(c = 0; c <= 100; c++) {
                if(a + b + c <= S && a * b * c <= T) count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
