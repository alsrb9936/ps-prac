#include<iostream>

using namespace std;

int func1(int N){
  int i=0;
  int sum =0;
  while(N--){
    i++;
    if(i%3==0 ||i%5==0){
      sum += i;
    }
  }

  return sum;
};

int main(){
    cout << func1(16) <<"\n";
    cout << func1(34567) << "\n";
    cout << func1(27639) << "\n";
}