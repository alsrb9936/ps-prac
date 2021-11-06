#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int cnt1=0,cnt2=0;
    for(int i=1;i<=8;i++){
        int tmp;
        cin >> tmp;
        if(tmp == i) cnt1++;
        else if(tmp == 9-i) cnt2++;
    }

    if(cnt1 == 8) cout << "ascending";
    else if(cnt2 == 8) cout << "descending";
    else cout << "mixed";
}