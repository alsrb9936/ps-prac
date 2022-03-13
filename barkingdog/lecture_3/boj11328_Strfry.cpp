#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    int N;
    cin >> N;

    while(N--){
        int arr[27];
        int check=1;
        memset(arr, 0 ,sizeof(arr));
        
        string a,b;
        cin >> a >> b;
        for(auto c:a) arr[c-'a'] += 1;
        for(auto c:b) arr[c-'a'] -= 1;

        for(auto c:arr){
            if(c){
                cout << "Impossible" << "\n";
                check = 0;
                break;
            }
        }
        if(check) cout << "Possible" << "\n";
    }
}