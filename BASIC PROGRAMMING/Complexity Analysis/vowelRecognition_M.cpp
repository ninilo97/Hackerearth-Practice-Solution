//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

unordered_map<char,bool> mpp;

int main(){
  mpp['a']=mpp['e']=mpp['i']=mpp['o']=mpp['u']=mpp['A']=mpp['E']=mpp['I']=mpp['O']=mpp['U']=true;
  int t; cin>>t; while(t--){
    ll res=0,sz; string str; cin>>str; sz=str.size(); for(int i=0;i<sz;++i) if(mpp[str[i]]) res+=(sz-i)*(i+1);
    cout<<res<<"\n";
  }
  return 0;
}
