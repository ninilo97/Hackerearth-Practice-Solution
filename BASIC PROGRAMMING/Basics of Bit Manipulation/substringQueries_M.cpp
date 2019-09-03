//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int val(char c){
	if(c>='a') return 10+26+c-'a';
	if(c>='A') return 10+c-'A';
	return c-'0';
}

int arr[62];

int main() {
	int t; cin>>t; while(t--){
		string str; cin>>str;
		int n=str.size();
		int q; cin>>q; while(q--){
			string sstr; cin>>sstr;
			ll mask=0,test=0,res=0; for(auto ss:sstr) mask|=(1L<<val(ss));
			int st=0, en=0;
			memset(arr, 0, sizeof arr);
			while(en<n and st<n){
				int x = val(str[en]);
				arr[x]++;
				if(arr[x]==1) test|=(1L<<x);
				while(st<n and (test&mask)==mask){
					res+=n-en;
					int y = val(str[st]);
					arr[y]--;
					if(arr[y]==0) test^=(1L<<y);
					st++;
				}
				en++;
			}
			cout<<res<<endl;
		}
	}
	return 0;
}
