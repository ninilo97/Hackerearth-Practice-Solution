#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;

long long power(long long y, long long x){
    long long res=1;
    while(x>0){
        if(x%2==0) { x/=2; y=((y%MOD)*(y%MOD))%MOD; }
        else { x-=1; res=((res%MOD)*(y%MOD))%MOD; x/=2; y=((y%MOD)*(y%MOD))%MOD; }
    }
    return res;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int i,t; cin>>t; string tmpStr; getline(cin,tmpStr);
  while(t--){
    long long x=0, y=0, idx=1;
    string str1,str2; cin>>str1>>str2;

    for(i=str1.size()-1;i>=0;--i){
      x = ((x%MOD)+(idx*(str1[i]-'0')%MOD))%MOD; idx*=10;
    }

    idx=1;
    for(i=str2.size()-1;i>=0;--i){
      y = (y+(idx*(str2[i]-'0')%(MOD-1)))%(MOD-1); idx*=10;
    }
    cout<<"\n"<<x<<"^"<<y<<"\n";
    cout<<power(x,y)%MOD;
    /* */
  }
  return 0;
}
