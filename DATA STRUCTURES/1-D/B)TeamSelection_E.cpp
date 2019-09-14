//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX = 5000;

int a[MX+1],b[MX+1],c[MX+1];

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; ll res=0; cin>>n;
  for(int i=0;i<n;++i) cin>>a[i];
  for(int i=0;i<n;++i) cin>>b[i];
  for(int i=0;i<n;++i) for(int j=i+1;j<n;++j) if(a[i]<a[j]) c[j]++;
  for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(a[i]<b[j]) res+=c[i];
  cout<<res;
  return 0;
}
