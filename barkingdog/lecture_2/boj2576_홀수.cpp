#include <bits/stdc++.h>

using namespace std;

int main(){
    int sum = 0,min=101,input;

    for(int i=0;i<7;i++){
        cin >> input;
        
        if(input%2==1){
            sum+=input;
            if(min > input) min = input;
        }
    }

    if(sum) {
      cout << sum << '\n';
      cout << min;
    }
    else cout << -1;
}