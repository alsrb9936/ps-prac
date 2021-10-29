#include <iostream>

using namespace std;

int func4(int N){
    int i =1;
    while(2*i<=N) i*= 2;
    return i;
}
int main(){
    cout << func4(5) << "\n";
    cout << func4(97615282) << "\n";
    cout << func4(1024) << "\n";
}