#include <bits/stdc++.h>

using namespace std;

int main(){
    int input;
    pair<int,int> M = make_pair(0,0);

    for(int i=0;i<9;i++){
        cin >> input;
        if(M.first < input) M = make_pair(input,i+1);
    }

    cout << M.first << '\n' << M.second;
}