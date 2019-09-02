//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pc putchar
const ll MX = 1e6;
const ll inf = 1e7;

void in (ll &x){
    bool neg = false;
    register int c;
    x = 0;
    c = getchar();
    if(c == '-'){
        neg = true;
        c = getchar();
    }
    for(; (c>47 && c<58); c = getchar())
        x = x * 10 + c - 48;
    if(neg)
        x *= -1;
}
void out(ll x){
    ll n = x, rem, ct = 0;
    rem = n;
    if(n == 0){
        pc('0');
        return;
    }
    while ((rem%10) == 0) {
        ++ct;
        rem /= 10;
    }
    rem = 0;
    while (n) {
        rem = rem * 10 + n%10;
        n /= 10;
    }
    while (rem) {
        pc(rem%10 + '0');
        rem /= 10;
    }
    while (ct--) {
        pc('0');
    }
}

bool prime[MX+10];
ll parr[MX+10],pidx[MX+10],pnext[MX+10],pprev[MX+10],idx;

int main(){
  memset(prime,true,sizeof(prime));
  prime[0]=prime[1]=false;
  for(int i=2;i*i<=MX;++i) if(prime[i]) for(int j=i*i;j<=MX;j+=i) prime[j]=false;

  idx=0;
  for(int i=2;i<=MX;++i){
    if(prime[i]){
      parr[idx]=i;
      pidx[i]=idx;
      ++idx;
    }
  }

  idx=-inf;
  for(int i=2;i<=MX;++i){
    if(prime[i]) idx=i;
    pprev[i]=idx;
  }

  idx=inf;
  for(int i=MX;i>0;--i){
    if(prime[i]) idx=i;
    pnext[i]=idx;
  }

  ll q,l,r; in(q); while(q--){
    in(l);
    in(r);

    l=pnext[l];
    r=pprev[r];

    if(l>=r){
      pc('-');
      out(1);
      pc('\n');
    }
    else{
      idx=inf;
      for(int i=pidx[l];i<pidx[r];++i){
        if((parr[i]^parr[i+1])<idx){
          idx=parr[i]^parr[i+1];
          if(idx<=2) break;
        }
      }
      out(idx);
      pc('\n');
    }
  }
  return 0;
}
