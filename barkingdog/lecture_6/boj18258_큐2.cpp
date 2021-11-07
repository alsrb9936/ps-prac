#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    queue<int> q;
    int N;
    cin >> N;

    while(N--){
        string s;
        cin >> s;
        if(s == "push"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(s == "pop"){
            if(q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(s == "size"){
            cout << q.size() << '\n';
        }
        else if(s == "empty"){
            cout << q.empty() << '\n';
        }

        else if(s == "front"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else if(s == "back"){
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
}