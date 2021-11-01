#include <bits/stdc++.h>

using namespace std;

int freq[26];
int main(){
    string S;
    cin >> S;

    for(auto c:S) freq[c - 'a']++;
    for(auto c:freq) cout << c << ' ';
}