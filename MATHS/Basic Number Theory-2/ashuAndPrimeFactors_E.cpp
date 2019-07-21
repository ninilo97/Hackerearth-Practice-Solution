//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1000000;

int minPrime[MX+1],countPrime[MX+1];

int main(){
  for(int i = 2; i*i <= MX; ++i) if(!minPrime[i]) for(int j = i*i; j <= MX; j += i) if(!minPrime[j]) minPrime[j]=i;
  for(int i = 0; i <= MX; ++i) if(!minPrime[i]) minPrime[i] = i;
  for(int i = 0; i <= MX; ++i) countPrime[minPrime[i]]++;

  int t; cin>>t;
  while(t--){ int n; cin>>n; cout<<countPrime[minPrime[n]]<<"\n"; }
  return 0;
}
