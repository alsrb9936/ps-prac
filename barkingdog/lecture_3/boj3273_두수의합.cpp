#include <bits/stdc++.h>

using namespace std;

int func(int arr[],int num,int x){
    int cnt = 0;
    int tmp_arr[2000001] = {};
    for(int i=0;i<num;i++){
        if(x-arr[i]>0&&tmp_arr[x - arr[i]]) cnt++;
        tmp_arr[arr[i]] = 1;
    }
    return cnt;
}

int main(){
    int n,x;
    cin >> n ;
    int arr[n];

    for(int i=0;i<n;i++) cin >> arr[i];

    cin >> x;

    cout << func(arr,n,x);
}