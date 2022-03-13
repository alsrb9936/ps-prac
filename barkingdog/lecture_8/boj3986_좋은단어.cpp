#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int c;
    cin >> c;

    int cnt = 0;

    while(c--){
        stack <char> s;
        string tmp;

        cin >> tmp;

        for(auto a:tmp){
            if(!s.empty()){
                if(s.top() == a) {
                    s.pop();
                    continue;
                }
                else s.push(a);
            }
            else s.push(a);
        }
        if(s.empty()) cnt++;
    }

    cout << cnt;
}