#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vector<int>>;
using vc = vector<char>;
using vcc = vector<vector<char>>;
using ll = long long;

int main(void){

    long long int A, B, C, D;
    cin >> A >> B >> C >> D;

    long long int blue = A, red = 0;

    for(long long int count = 1; count <= A; count++) {
        blue += B;
        red += C;
        if(blue <= red * D) {
            cout << count << endl;
            exit(0);
        }
    }

    cout << "-1" << endl;
    return 0;
}
