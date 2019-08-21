//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MX_A = 26; //Max alphabet
const int MX = 20; //Max string size;

ll fact[MX+1];

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  fact[0]=1; for(ll i=1;i<=MX;++i) fact[i]=fact[i-1]*i;

  ll t; cin>>t; while(t--){
    string s; ll n,x=0; cin>>s>>n; sort(s.begin(),s.end());

    ll freq[MX_A]={0},sum=0,k=0,len=s.size();
    for(ll i=0;i<len;i++) freq[s[i]-'a']++;

    char out[MX_A];
    while(sum!=n){ sum=0;
      for(ll i=0;i<MX_A;i++){
        if(freq[i]==0) continue;
        freq[i]--;

        ll xsum=fact[len-1-k];
        for(ll j=0;j<MX_A;j++) xsum/=fact[freq[j]];

        sum += xsum;

        if(sum>=n){ out[k++]=i+'a'; n-=(sum-xsum); break; }
        if(sum<n) freq[i]++;
      }
    }
    for(ll i=MX_A-1;k<len and i>=0;i--) if(freq[i]){ out[k++]=i+'a'; freq[i++]--; }
    for(ll i=0;i<k;++i) cout<<out[i];
    cout<<"\n";
  }
  return 0;
}
