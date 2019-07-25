//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool isPrime(ll n){
  if(n<2 or n%2==0) return false;
  if(n==2) return true;
  for(int i=3;i*i<=n;i+=2) if(n%i==0) return false;
  return true;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t; cin>>t;
  while(t--){ ll n; cin>>n; isPrime(n)?cout<<"prime\n":cout<<"composite\n"; }
  return 0;
}
