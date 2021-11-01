int func2(int arr[],int num){
    int tmp_arr[101] = {};
    for(int i=0;i<num;i++){
        if(tmp_arr[100 - arr[i]]) return 1;
        tmp_arr[arr[i]] = 1;
    }
    return 0;
}