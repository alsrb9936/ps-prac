#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> p;
    vector<int> sol;
    auto t = p.begin();
    int cnt = 1;
    int K,N;
    cin >> N >> K;

    for(int i=1;i<=N;i++){
        p.push_back(i);
    }

    while(!p.empty()){
        if(t == p.end()) t = p.begin();
        if(cnt == K){
            sol.push_back(*t);
            t = p.erase(t);
            cnt = 1;
        }
        else{
            t++;
            cnt++;
        }
    }

    cout << '<';
    for(int i=0;i<N;i++){
        if(i==N-1) cout << sol[i]<< '>';
        else cout << sol[i] << ", ";
    }
}