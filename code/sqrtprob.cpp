#include <bits/stdc++.h>

using namespace std; 


int main() {
  double ans = 0, N;
  cin>>N;
  if(N >= 0){
    ans = sqrt(N);
    N--;
    while(N > 0){
      ans = sqrt(N+ans);
      N--;
    }
    cout<<ans<<endl;
  }else {
    cout<<"N must be >= 0"<<endl;
  }

} 