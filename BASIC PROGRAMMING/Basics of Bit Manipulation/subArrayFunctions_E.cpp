//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int t; cin>>t; while(t--){
	  int n,m,p; cin>>n>>m>>p;
	  vector<int> a(n);

    for(int i=0;i<n;++i) cin>>a[i];

	  int l=-1,r=-1,res=0;

	  for(int i=0;i<n;++i){
      priority_queue<int> pqmax;
      priority_queue<int,vector<int>,greater<int>> pqmin;
      pqmax.push(a[i]); pqmin.push(a[i]);

      int ilimit = min(p,m)-1;
      if(ilimit+i>n) break;

      int func1=a[i],func2=a[i],maxFunc3=INT_MIN,maxJ=-1;

      for(int j=i+1;j<n;++j){
        if(pqmax.size()<m){
          pqmax.push(a[j]);
          func1^=a[j];
        }
        else if(pqmax.top()>a[j]){
          func1^=pqmax.top();
          func1^=a[j];
          pqmax.pop();
          pqmax.push(a[j]);
        }

        if(pqmin.size()<p){
          pqmin.push(a[j]);
          func2^=a[j];
        }
        else if(pqmin.top()<a[j]){
          func2^=pqmin.top();
          func2^=a[j];
          pqmin.pop();
          pqmin.push(a[j]);
        }

        if(pqmin.size()==p and pqmax.size()==m){
          int func3 = func1&func2;
          if(maxFunc3 <= func3){
            maxFunc3 = func3;
            maxJ = j;
          }
        }
      }

      if(res<maxFunc3 or (res==maxFunc3 and (r-l)<(maxJ-i))){
        l = i+1;
        r = maxJ+1;
        res = maxFunc3;
      }
	  }
	  cout<<l<<" "<<r<<" "<<res<<endl;
	}
	return 0;
}
