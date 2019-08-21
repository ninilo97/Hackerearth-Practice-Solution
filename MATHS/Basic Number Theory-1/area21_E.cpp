#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;
#define MX 1000000

bool prime[MX+1];

void genPrime(){
  memset(prime,true,sizeof(prime));
  for(int i = 2; i*i <= MX; ++i) if(prime[i]) for(int j = i*i; j <= MX; j+=i) prime[j] = false;
  prime[0] = false ,prime[1] = false;
}

vector<int> vec, primeCount;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  genPrime();
  int i=1,n,t; cin>>n>>t;
  vec.emplace_back(0);
  while(n--){
    int temp; cin>>temp; vec.emplace_back(temp);
  }

  int cnt = 0;
  for(int i = 0; i < vec.size(); ++i){
    if(prime[vec[i]]) cnt++;
    primeCount.emplace_back(cnt);
  }

  while(t--){
    int x, y, cnt=0; cin>>x>>y;
    cout<<primeCount[y]-primeCount[x-1]<<"\n";
  }
  /* */
  return 0;
}
