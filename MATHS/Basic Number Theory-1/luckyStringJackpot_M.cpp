//@author Nikhil Londhe
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;

vector<long long> vec;

long long power(long long y, long long x){
    long long res=1;
    while(x>0){
        if(x%2==0) { x/=2; y*=y; }
        else { x-=1; res*=y; x/=2; y*=y; }
    }
    return res;
}

void genSeq(){
    vec.emplace_back(0);
    long long x = 0,cnt=1;
    for(long long i=1;i<45;i++){
        long long tmp = x+i*power(2,i)+cnt;
        vec.emplace_back(tmp);
        vec.emplace_back(tmp+1);
        x=x+i*power(2,i);
        cnt+=2;
    }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  genSeq();
  int t; cin>>t;
  while(t--){
    long long n; cin>>n;
    auto lb = lower_bound(vec.begin(),vec.end(),n);
    cout<<lb-vec.begin()<<"\n";
  }
  return 0;
}
