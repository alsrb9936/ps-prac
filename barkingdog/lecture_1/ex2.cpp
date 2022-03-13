#include <iostream>

using namespace std;

int func2(int arr[],int N){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]+arr[j]==100){
                return 1;
            }
        }
    }
    return 0;
};

int main(){
    int arr[3][4] = {{1,52,48}, {50,42}, {4,13,63,87}};
    cout << func2(arr[0],3) <<'\n';
    cout << func2(arr[1],2) <<'\n';
    cout << func2(arr[2],4) <<'\n';

}