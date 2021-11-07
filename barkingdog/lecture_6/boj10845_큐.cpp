#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head , rear;

void push(int x){
    dat[rear++] = x;
}

int empty(void){
    if(head == rear) return 1;
    return 0;
}

int pop(void){
    if(empty()) return -1;
    int x;
    x = dat[head++];
    return x;
}

int size(void){
    return rear - head;
}

int front(void){
    if(empty()) return -1;
    return dat[head]; 
}

int back(void){
    if(empty()) return -1;
    return dat[rear-1];
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;

    while(N--){
        string s;
        cin >> s;
        if(s == "push"){
            int x;
            cin >> x;
            push(x);
        }
        else if(s == "pop"){
            cout << pop() << '\n';
        }
        else if(s == "size"){
            cout << size() << '\n';
        }
        else if(s == "empty"){
            cout << empty() << '\n';
        }

        else if(s == "front"){
            cout << front() << '\n';
        }
        else if(s == "back"){
            cout << back() << '\n';
        }
    }

}