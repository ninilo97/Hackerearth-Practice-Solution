//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e6;

int spf[MX+1];
bool mk[MX+1];

bool check(){
  int x; cin>>x; if(x<4) return false;
  ll y=x; vector<int> vec;

  while(x!=1){ int xx=spf[x]; vec.emplace_back(xx); while(x%xx==0) x/=xx; }

  for(int i=0;i<vec.size();++i) for(int j=i;j<vec.size();++j) if(y%(vec[i]*vec[j])==0 and mk[y/(vec[i]*vec[j])]) return true;
  return false;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  for(int i=2;i<=MX;++i) if(spf[i]==0) for(int j=i;j<=MX;j+=i) if(spf[j]==0) spf[j]=i;
  int n,q; cin>>n>>q;

  while(n--){ int x; cin>>x; mk[x]=true; }
  for(ll i=2;i<=MX;++i) if(mk[i]) for(ll j=i;j<=MX;j*=i) mk[j]=true;
  mk[1]=true;

  while(q--){ check()?cout<<"YES\n":cout<<"NO\n"; }
  return 0;
}
