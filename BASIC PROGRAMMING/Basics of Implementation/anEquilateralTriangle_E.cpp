//@author Nikhil Londhe
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

inline ll sumn(int n){return ((n*(n+1)*(n+2))/6);}

int main(){
  ll res = 0; int num; cin>>num;
  while(num>2){ res+=sumn(num-2), num-=2; }
  cout<<res;
  return 0;
}
