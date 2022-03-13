#include <bits/stdc++.h>

using namespace std;

int main(){
    int count[26];
    string com = "abcdefghijklmnopqrstuvwxyz";
    string S;

    cin >> S;
    fill(count,count+26,0);

    for(int i=0;i<S.size();i++){
        for(int j=0;j<26;j++){
            if(S[i]==com[j]) count[j]++;
        }
    }

    for(int& i:count) cout << i << ' ';
}