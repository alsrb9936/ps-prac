#include <iostream>
#include <algorithm> //fill 함수 헤더
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int len = 0; //연결리스트 길이
int unused = 1; //새로운 원소가 들어갈 인덱스값

void init_list(void){
    fill(pre, pre+ MX, -1);
    fill(nxt, nxt+ MX, -1);
};

void insert(int addr, int num){
    dat[unused] = num;
    nxt[unused] = nxt[addr];
    pre[unused] = addr;  
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused; 
    unused++;
    len++;
}
void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr]!= -1) pre[nxt[addr]] = pre[addr];
    len--;
}
void traverse(void){ //모든 연결리스트 출력
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}
void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

int main(void){
    init_list();
    insert_test();
    erase_test();
}
