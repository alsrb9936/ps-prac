#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int N;
    cin >> N >> s;

    N = 0;

    for(auto c:s){
        N += c - '0';
    }
    cout << N;
}