//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

bool prime[1000001];
int sum_prime[1000001];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  memset(prime,true,sizeof(prime)); prime[1] = false;
  for(int p=2;p*p<1000001;++p) if(prime[p]==true) for(int i=p*p;i<=1000001;i+=p) prime[i]=false;

  memset(sum_prime,0,sizeof(sum_prime));

  int cnt = 0;
  for(int i=2;i<1000001;i++){
    if(prime[i]) cnt++;
    sum_prime[i]=cnt;
  }

  int t; cin>>t;
  while(t--){
    int x,y,cnt=0; cin>>x>>y; if(x>y) swap(x,y);
    cout<<sum_prime[y]-sum_prime[x-1]<<"\n";
  }
  return 0;
}
