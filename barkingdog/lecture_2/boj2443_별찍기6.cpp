#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;

    for(int i=0;i<N;i++){
      for(int k=0;k<i;k++){
        cout << ' ';
      }
      for(int j=0;j<N-i;j++){
        cout << '*';
      }
      for(int l=0;l<N-i-1;l++){
        cout << '*';
      }
      cout << "\n";
    }
}