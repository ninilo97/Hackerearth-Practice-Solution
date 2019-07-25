//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 10000;
const int MXX = 99980001;
double res[MX];

bool isPrime(ll n){
  if(n<2 or n%2==0) return false;
  if(n==2) return true;
  for(int i=3;i*i<=n;i+=2) if(n%i==0) return false;
  return true;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n=3,sq=n*n,pCnt=0,tCnt=0;
  for(int i=1;;++i){
      int x = (i*(i+2)/4)+((i%4)/3)+1;
      if(x>sq){ res[n]=(100.0*pCnt)/tCnt; n+=2; sq=n*n; if(sq>MXX) break; }
      if(isPrime(x)) pCnt++;
      tCnt++;
  }

  int t; cin>>t;
  while(t--){ int nn; cin>>nn; printf("%0.6f\n",res[nn]); }
  return 0;
}
