//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1000000;

bool prime[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  memset(prime,true,sizeof(prime));
  for(int i=2;i*i<=MX;++i) if(prime[i]) for(int j=i*i;j<=MX;j+=i) prime[j]=false;
  prime[0]=false, prime[1]=false;

  int n; cin>>n; double res=n;
  for(int i=1;i<=n;++i) if(prime[i] and n%i==0) res*=(1-(1.0/i));
  cout<<res;
  return 0;
}
