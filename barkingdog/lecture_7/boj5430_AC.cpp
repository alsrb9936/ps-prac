#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int T;
    cin >> T;

   while(T--){
        int check = 0;
        deque<int>q;
        int N,vec=1;
        string s,arr;
        cin >> s >> N >> arr;

        int x = 0;
        for(auto c:arr){
            if(c=='[') continue;
            if(c >= '0' && c <='9'){
                x *= 10;
                x += int(c - '0');
            }
            else{
                q.push_back(x);
                x = 0;
            }
        }
        if(arr.size()==2) q.pop_front();
        
        for(auto c:s){
            if(c == 'R') vec=-vec;
            else{
                if(q.size()==0){
                    check = 1;
                }
                else{
                    if(vec==1) q.pop_front();
                    else q.pop_back();
                }
            }

        }

        if(check){
            cout << "error" << '\n';
            continue;
        }

        if(q.empty()){
            cout << '[' << ']' << '\n';
            continue;
        }

        if(vec==1){
            cout << '[';
            while(q.size()!=1){
                cout << q.front() << ',';
                q.pop_front();
            }
            cout << q.front() << ']' << '\n';
        }
        else{
            cout << '[';
            while(q.size()!=1){
                cout << q.back() << ',';
                q.pop_back();
            }
            cout << q.front() << ']' << '\n';
            q.pop_front();
        }
    }


}