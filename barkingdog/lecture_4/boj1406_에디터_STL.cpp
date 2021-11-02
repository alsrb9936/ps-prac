#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    char command;
    int M;
    string s;
    list<char> s_list;
    cin >> s;
    cin >> M;
    for(auto c:s) s_list.push_back(c);

    list<char>::iterator t = s_list.end();

    while(M--){
        char tmp;
        cin >> command;
        switch(command){
            case 'L':
                if(t != s_list.begin())
                    t--;
                break;
            case 'D':
                if(t != s_list.end())
                    t++;
                break;
            case 'B':
                if(t != s_list.begin())
                    t = s_list.erase(--t);
                break;
            case 'P':
                cin >> tmp;
                s_list.insert(t,tmp);
                break;
        }
    }

    for(auto c:s_list) cout << c;
}