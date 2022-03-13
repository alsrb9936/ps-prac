#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum = 0,escape=0;
    int arr[9];
    for(int i=0;i<9;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(sum - arr[i] - arr[j] == 100){
                arr[i]=101;
                arr[j]=101;
                escape = 1;
                break;
            }
        }
        if(escape) break;
    }

    sort(arr,arr+9);

    for(int i=0;i<7;i++) cout << arr[i] << '\n';

}