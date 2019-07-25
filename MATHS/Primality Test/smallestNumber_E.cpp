//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1000000;

bool prime[MX+1];
vector<int> factors;

void genPrime(){
  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;
}

void primeFac(int n){
  while(n%2==0){ prime[2]=false; n>>=1; }
  for(int i=3;i*i<=n;i=i+2) while(n%i==0){ prime[i]=false; n/=i; }
  if(n>2) prime[n]=false;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin>>t;
  while(t--){
    genPrime(); bool fl=true; int n; cin>>n;
    while(n--){
      int x; cin>>x; if(x==0) continue; //Some test cases have 0
      if(prime[x]) prime[x]=false;
      else primeFac(x);
    }
    for(int i=1;i<=MX;++i) if(prime[i]){ fl=false; cout<<i<<"\n"; break; }
    if(fl) cout<<"-1\n";
  }
  return 0;
}
