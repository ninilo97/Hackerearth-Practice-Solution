//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int n,or1=0,or2=0,s1=0,s2=0; cin>>n;
  for(int i=0;i<n;++i){ int x; cin>>x; or1|=x; s1+=x; }
  for(int i=0;i<n;++i){ int x; cin>>x; or2|=x; s2+=x; }

  int r1 = (s1-or1),r2 = (s2-or2);
  (r1>r2)?cout<<"1 "<<(r1-r2):cout<<"2 "<<(r2-r1);

  return 0;
}
