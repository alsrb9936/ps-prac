#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int i=3,tmp,result;
    string res = "DCBAE";

    while(i--){
        result =0;
        for(int j=0;j<4;j++){
            cin >> tmp;
            if(tmp == 1) result++;
        }
        cout << res[result] << '\n';
    }
}