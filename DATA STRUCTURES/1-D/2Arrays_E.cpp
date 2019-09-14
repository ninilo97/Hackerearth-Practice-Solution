//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

multiset<int> a,b;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n;
  for(int i=0;i<n;++i){ int x; cin>>x; a.insert(x); }
  for(int i=0;i<n;++i){ int x; cin>>x; b.insert(x); }
  int xa=a.count(-1), xb=b.count(-1),x=xa+xb;
  if(x==1){
    if(xa) if(accumulate(a.begin(),a.end(),1)>accumulate(b.begin(),b.end(),0)){ cout<<'0'; return 0; }
    if(xb) if(accumulate(b.begin(),b.end(),1)>accumulate(a.begin(),a.end(),0)){ cout<<'0'; return 0; }
    cout<<'1'; return 0;
  }
  if(x==2){
    if(xa and xb){ cout<<"Infinite\n"s; return 0; }
    if(xa){ cout<<max((accumulate(b.begin(),b.end(),0)-accumulate(a.begin(),a.end(),2)+1),0); return 0; }
    if(xb){ cout<<max((accumulate(a.begin(),a.end(),0)-accumulate(b.begin(),b.end(),2)+1),0); return 0; }
  }
  return 0;
}
