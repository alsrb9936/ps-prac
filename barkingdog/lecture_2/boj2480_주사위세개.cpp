#include <bits/stdc++.h>

using namespace std;

void sol(int N){
    cout << 1000 + (N * 100);
};

int main(){
    int max=0;
    int arr[3];

    for(int i=0;i<3;i++){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
    }

    if(arr[0]==arr[1]&&arr[0]==arr[2]) cout << 10000 + (max * 1000);
    else if(arr[0]==arr[1]||arr[0]==arr[2]) sol(arr[0]);
    else if(arr[1]==arr[2]) sol(arr[1]);
    else cout << max * 100;
}