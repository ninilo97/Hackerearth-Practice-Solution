//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  string x,y; while(cin>>x>>y){
    string res;
    reverse(x.begin(),x.end()); reverse(y.begin(),y.end());
    x.resize(100,'0'); y.resize(100,'0');
    int carry=0;
    for(int i=0;i<100;++i){
      int temp = (x[i]-'0')+(y[i]-'0')+carry;
      carry = temp/10;
      res.push_back((temp%10)+'0');
    }
    reverse(res.begin(),res.end());
    res.erase(0, min(res.find_first_not_of('0'), res.size()-1));
    cout<<res<<endl;
  }
  return 0;
}
