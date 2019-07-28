//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MX = 3e6;
#define f first
#define s second
template<class T1, class T2> void ckmin(T1 &a, T2 b) { a = min(a, b); }

multiset<pair<int,int>> arr;
int t,k,cnt,prevs,mn;
ll idx[MX];


long long modMultiply(long long a, long long b){
  long long res = 0;
  while(b){
    if(b & 1) res += a;
    a *= 2, b>>=1;
  }
  return res;
}

void relu(ll& a){
  a=a-k;
  if(a<0) a = abs(a)&1?1:0;
}

//Old solution hence the sub standard implementation
int main(){
  cin>>t>>k;
  unsigned long long sum=0;
  for(int i=0;i<t;++i){ ll tmp; cin>>tmp; arr.emplace(make_pair(tmp,i+1)); sum+=tmp; }

  idx[0]=sum-modMultiply(t,(*arr.begin()).f); prevs=(*arr.begin()).f;
  for(auto it:arr){
    if(cnt==0){ cnt++; continue; }
    int dif = it.f - prevs; prevs = it.f;
    idx[cnt] = idx[cnt-1]+modMultiply(cnt,dif)-modMultiply((t-cnt),dif);
    cnt++;
  }

  for(int i=0;i<t;++i) relu(idx[i]);

  auto it = min_element(idx,idx+t);
  for(auto i:(cnt=0,mn=1e7,arr)){
    if(idx[cnt++] == *it) ckmin(mn,i.s);
  }
  for(auto i:(cnt=0,arr)){
    if(mn == i.s) { cout<<i.s<<" "<<idx[cnt]; break;}
    cnt++;
  }
  return 0;
}
