#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int C;
    cin >> C;

    while(C--){
        string L;
        list<char> L_list;
        list<char>::iterator t = L_list.end();
        cin >> L;
        for(int i=0;i<(int)L.length();i++){
            char c = L[i];
            switch(c){
                case '<':
                    if(t != L_list.begin())
                        t--;
                    break;
                case '>':
                    if(t != L_list.end())
                        t++;
                    break;
                case '-':
                    if(t != L_list.begin())
                        t = L_list.erase(--t);
                    break;
                default:
                    L_list.insert(t,c);
                    break;
            }
        }
        for(auto c:L_list) cout <<c;
        cout << '\n';
    }

}