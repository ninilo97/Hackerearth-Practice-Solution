//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int nob(int i){
   i=i-((i>>1)&0x55555555);
   i=(i&0x33333333)+((i>>2)&0x33333333);
   return (((i+(i>>4))&0x0F0F0F0F)*0x01010101)>>24;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin>>t; while(t--){int x,y; cin>>x; y=pow(2,nob(x)); cout<<x+1-y<<" "<<y<<"\n"; }
  return 0;
}
