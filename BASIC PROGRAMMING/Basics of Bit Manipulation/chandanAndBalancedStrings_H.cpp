//@author Nikhil Londhe
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t; cin>>t; while(t--){
		unordered_map<ll,int> mpp; string str; cin>>str; ll x=0,res=0; mpp[x]=1;
		for(auto s:str){
			x^=(1<<(s-'a'));
			res+=mpp[x];
			mpp[x]++;
		}
		cout<<res<<endl;
	}
	return 0;
}
