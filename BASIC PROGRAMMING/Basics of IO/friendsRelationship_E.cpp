//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int N;

void pS(int n){ while(n--) cout<<'*'; }
void pH(int n){ while(n--) cout<<'#'; }

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int t; cin>>t; while(t--){
    cin>>N; for(int i=1;i<=N;++i){ pS(i); pH((N<<1)-(i<<1)); pS(i); cout<<endl; }
    cout<<endl;
  }
  return 0;
}
