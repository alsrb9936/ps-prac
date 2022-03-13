#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <char> s;
    string stick;
    cin >> stick;

    int cnt = 0;
    char tmp = 'tmp';

    for(auto a:stick){
        if(a == '(') s.push(a);
        else{
            s.pop();
            if(tmp == ')')cnt++;
            else cnt += s.size();
        }
        tmp = a;
    }

    cout << cnt;
}