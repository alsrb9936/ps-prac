#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,v, cnt = 0;
    cin >> N;
    int arr[N];

    for(int i=0;i<N;i++) cin >> arr[i];

    cin >>v;

    for(auto c:arr) if(v==c) cnt++;

    cout << cnt;
}