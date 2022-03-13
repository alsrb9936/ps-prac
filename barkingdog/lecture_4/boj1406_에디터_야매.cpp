#include <bits/stdc++.h>

using namespace std;
const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1; //새로운 원소가 들어갈 인덱스값

void init_list(void){
    fill(pre, pre+ MX, -1);
    fill(nxt, nxt+ MX, -1);
}

void insert(int addr, char num){
    dat[unused] = num;
    nxt[unused] = nxt[addr];
    pre[unused] = addr;  
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused; 
    unused++;;
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr]!= -1) pre[nxt[addr]] = pre[addr];
}

void traversal(void){ //모든 연결리스트 출력
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur];
        cur = nxt[cur];
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    char command;
    int M;
    int cusor = 0; 
    string s;

    init_list();

    cin >> s;
    cin >> M;

    for(auto c:s){
        insert(cusor,c);
        cusor++;
    }

    while(M--){
        char tmp;
        cin >> command;
        switch(command){
            case 'L':
                if(pre[cusor] != -1)
                    cusor = pre[cusor];
                break;
            case 'D':
                if(nxt[cusor]!= -1)
                    cusor = nxt[cusor];
                break;
            case 'B':
                if(pre[cusor] != -1){
                    erase(cusor);
                    cusor = pre[cusor];
                }
                break;
            case 'P':
                cin >> tmp;
                insert(cusor,tmp);
                cusor = nxt[cusor];
                break;
        }
    }
    traversal();
}