//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 1e3;

pair<int,int> arr[MX+1];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for(int i=0;i<=MX;++i) arr[0].first=0, arr[0].second=0;;

  int s,x,n; cin>>s>>x>>n;
  for(int i=1;i<=n;++i) cin>>arr[i].first>>arr[i].second;
  sort(arr+1,arr+n+1);

  ll days=0,i=1;
  while(s>0){
    ll die = arr[i].first-arr[i-1].first-1;
    ll diew = x*die;

    if(diew>s){ days+=s/x+(s%x>0); break; }
    else{ days+=die, s-=diew; }

    days++;
    if(arr[i].second>s) break;
    else s-=arr[i].second;

    if(++i>n){
      days+=s/x+(s%x>0);
      break;
    }
  }
  cout<<days;

  return 0;
}
