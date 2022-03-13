#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    deque<int>dq;

    int N,M,cnt =0;

    cin >> N >> M;

    for(int i=1;i<=N;++i) dq.push_back(i);

    auto head = dq.begin();
    auto rear = dq.rbegin();

    while(M--){
        int h_cnt=0,r_cnt=1;
        int x;

        cin >> x;

        if(x == dq.front()){
            dq.pop_front();
            head = dq.begin();
            continue;
        }
        else{
            while(*head != x){  
                head++;
                h_cnt++;
            }
            while(*rear != x){
                rear++;
                r_cnt++;
            }

            if(h_cnt < r_cnt){
                cnt += h_cnt;
                while(x != dq.front()){
                    dq.push_back(dq.front());
                    dq.pop_front();
                }    
            }
            else{
                cnt += r_cnt;
                while(x != dq.front()){
                    dq.push_front(dq.back());
                    dq.pop_back();
                }                
            }
            dq.pop_front();
            head = dq.begin();
            rear = dq.rbegin();
        }
    }

    cout << cnt;
}