//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1000000;

int vec[MX+1];

long long fac(int x){
  long long res=1;
  for(long long i = 1; i <= x; i++) res = i*res;
  return res;
}

void genPanDigit(){
  for(int i=1;i<7;++i){
    string str; int tmp=0; for(int j=0;j<=i;++j){ tmp=10*tmp+j; }
    str = to_string(tmp);
    for(int j=0;j<fac(i);++j){
      tmp = stoi(str);
      vec[tmp]++;
      next_permutation(str.begin(),str.end());
    }
  }
  for(int i=1;i<=MX+1;++i) vec[i]+=vec[i-1];
}

int main(){
  genPanDigit();
  int t; cin>>t;
  while(t--){ int x,y; cin>>x>>y; cout<<vec[y]-vec[x-1]<<"\n"; }
  return 0;
}
