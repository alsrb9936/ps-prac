#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int T;
    cin >> T;

    while(T--){
        int sum=0,cnt=0;
        string s;
        cin >> s;
        for(auto c:s){
            if(c=='O'){
                cnt++;
                sum+=cnt;
            }
            else cnt=0;
        }
        cout << sum << '\n';
    }
}