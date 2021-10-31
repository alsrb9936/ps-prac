#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
      for(int k=0;k<N-i-1;k++){
        cout << ' ';
      }
      for(int j=0;j<i+1;j++){
        cout << '*';
      }
      for(int l=0;l<i;l++){
        cout << '*';
      }
      cout << "\n";
    }
}