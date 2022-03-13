#include <bits/stdc++.h>

using namespace std;

int arr[27];
int main(){
    int cnt=0;
    string a,b;

    cin >> a >> b;

    for(auto c:a) arr[c - 'a']++;
    for(auto c:b) arr[c - 'a']--;

    for(auto c:arr){
        if(c != 0) cnt+= abs(c);
    }

    cout << cnt;
}