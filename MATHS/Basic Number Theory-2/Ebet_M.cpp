//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
const int MX = 1000000;
template<class T1, class T2> void ckmax(T1 &a, T2 b) { a = max(a, b); }

int facCount[MX+1];
ll proCount[MX+1];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int pos=0;
  for(int i=1;i<=MX;++i) for(int j=i;j<=MX;j+=i) facCount[j]++;
  for(int i=1;i<=MX;++i,pos++){
    proCount[i]=i*facCount[i];
    ckmax(proCount[i],proCount[i-1]+pos);
    if(proCount[i]!=proCount[i-1]) pos=0;
  }
  int t; cin>>t;
  while(t--){ int n; cin>>n; cout<<proCount[n]<<"\n"; }
  return 0;
}
