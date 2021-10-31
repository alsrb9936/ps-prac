#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,input,M=0,Y=0;
    
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> input;
        Y += (input/30 + 1) * 10;
        M += (input/60 + 1) * 15;
    }

    if(M==Y) cout << "Y M " << Y;
    else if(M<Y) cout << "M " << M;
    else cout << "Y " <<Y; 

}