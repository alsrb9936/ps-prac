#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        string s;
        int repeat;
        cin >> repeat >> s;

        for(auto c: s){
            for(int i=0;i<repeat;i++){
                cout << c;
            }
        }
        cout << '\n';
    }
}