#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    int A[N],B[N];
    int hit=0,blow=0;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    for(int i=0;i<N;i++){
        cin >> B[i];
    }
    for(int i=0;i<N;i++){
        if(A[i]==B[i]) hit++;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i]==B[j]) blow++;
        }
    }
    cout << hit << endl;
    cout << blow-hit << endl;
    return 0;
}