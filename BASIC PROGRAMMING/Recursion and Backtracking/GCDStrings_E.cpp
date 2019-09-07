//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;

ll xx,yy,tmp;

ll power(ll x,ll y){
  ll res=1;
  while(y>0){
    if(y%2==0){ y/=2; x=(x*x)%MOD; }
    else { y-=1; res=(res*x)%MOD; y/=2; x=(x*x)%MOD; }
  }
  return res;
}

ll calculateGP(ll firstTerm, ll numberOfTerms, ll len){
  ll commonRatio = power(2,len);
  ll summationGP = ((power(commonRatio,numberOfTerms)-1) * power(commonRatio-1,MOD-2))%MOD;
  return (summationGP*firstTerm)%MOD;
}

void g(ll a, ll b){
  if(a%b) {
    g(b,a%b);
    tmp = xx;
    xx = (calculateGP(xx,a/b,b) * power(2,a%b) + yy)%MOD;
    yy = tmp;
  } else {
    yy = power(2,b-1); xx = power(2,a-1);
  }
  return;
}

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){ int x,y; cin>>x>>y; g(x,y); cout<<xx<<endl; }
  return 0;
}
