#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int max=0,min=1000001,mid;
    int arr[3];

    for(int i=0;i<3;++i){
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    mid = arr[0] + arr[1] + arr[2] - max - min;

    cout << min << ' ' << mid << ' ' << max;
}