#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,w,L;
    queue<int> q;
    cin >> n >> w >> L;

    int truck[n];
    for(int i=0;i<n;++i){
        cin >> truck[i];
    }

    int index = 0;
    int time =0;
    int sum = 0;
    int num = 0;

    while(num!=n){
        if(q.size()==w){
            sum -= q.front();
            if(q.front() !=0) num++;
            q.pop();
        }
        if(sum + truck[index] <= L){
            q.push(truck[index]);
            sum += q.back();
            index++;
        }
        else{
            q.push(0);
        }
        time++;
    }

    cout << time;
}