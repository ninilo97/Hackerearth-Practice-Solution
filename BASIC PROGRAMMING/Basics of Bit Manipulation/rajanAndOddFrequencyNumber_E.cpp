//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,x,res=0; cin>>n; n=(n<<1)+1; while(n--){ cin>>x; res^=x; }
  cout<<res;
  return 0;
}
