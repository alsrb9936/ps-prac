#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  
  int n;
  int idx = 0, x = 0;
  vector<char>sol;
  stack<int> S;

  cin >> n;

  int arr[n];

  for(int i=0;i<n;++i) cin >> arr[i];
  
  while(x <= n){
    if(!S.empty() && S.top() == arr[idx]){
      S.pop();
      sol.push_back('-');
      idx++;
      continue;
    }

    x += 1;
    S.push(x);
    sol.push_back('+');
  }

  sol.pop_back();
  S.pop();

  if(!S.empty()) cout << "NO";
  else for(auto c :sol) cout << c << '\n';;

}