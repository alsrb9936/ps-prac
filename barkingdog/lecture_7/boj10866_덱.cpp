#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX + 1];
int head = MX, rear = MX;

int empty(void){
    if(head == rear) return 1;
    return 0;
}
void push_front(int x){
    dat[--head] = x;
}
void push_back(int x){
    dat[rear++] = x;
}
int pop_front(void){
    if(empty()) return -1;
    int x = dat[head];
    head++;
    return x;
}
int pop_back(void){
    if(empty()) return -1;
    int x = dat[rear-1];
    rear--;
    return x;
}
int size(void){
    return rear-head;
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
        if(s == "push_back"){
            int x;
            cin >> x;
            push_back(x);
        }
        else if(s == "push_front"){
            int x;
            cin >> x;
            push_front(x);
        }
        else if(s == "pop_front"){
            cout << pop_front() << '\n';
        }
        else if(s == "pop_back"){
            cout << pop_back() << '\n';
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