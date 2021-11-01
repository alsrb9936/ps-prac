#include <bits/stdc++.h>

using namespace std;

int man[7];
int woman[7];

int Allocate_Room(int K){
    int cnt = 0;
    for(int i=0;i<7;i++){
        cnt += man[i]/K + woman[i]/K;
        if(man[i]%K > 0) cnt += 1;
        if(woman[i]%K > 0) cnt += 1;
    }

    return cnt;
}
int main(){
    int N,K,gender,grade;
    cin >> N >> K;

    for(int i=0;i<N;i++){
        cin >> gender >> grade;
        if(gender) man[grade]++;
        else woman[grade]++;
    }

    cout << Allocate_Room(K);

}