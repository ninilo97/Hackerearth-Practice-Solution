//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 627509;

int arr[MX];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  for(int i=1,cnt=0;cnt<MX;++i) if(__gcd(__builtin_popcount(i),int(log2(i)+1)-__builtin_popcount(i))==1) arr[cnt++]=i;
  int t; cin>>t; while(t--){
  	int n; cin>>n; cout<<arr[--n]<<endl;
  }
  return 0;
}
