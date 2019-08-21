#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1000000007;

long long power(long long x, long long y, long long m){
    if(y == 0) return 1;
    long long p = power(x, y/2, m) % m;
    p = (p * p) % m;
    return (y%2 == 0)? p : (x * p) % m;
}

long long modInverse(long a, long m){
    long long g = __gcd(a, m);
    if (g != 1) cout << "Inverse doesn't exist";
    else return power(a, m-2, m);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; string temp_str; cin>>t; getline(cin,temp_str);
  while(t--){
      unordered_map<int,int> mpp;
      string str;

      getline(cin,str);
      //Find freq of each digit in input number
      for(int i=0;i<str.size();++i) mpp[str[i]-'0']++;

      //Find denominator
      long long den=1;
      for(int i=0;i<10;++i){
          //Find factorial of all digits have freq greater than 1 and save the product of all such digits in denominator
          if(mpp[i]>1){
              long long num = 1;
              for(int j=mpp[i];j>0;j--) num = ((num%MOD)*(j%MOD))%MOD;
              den = ((den%MOD)*(num%MOD))%MOD;
          }
      }

      //Find numerator
      long long num = 1;
      //Find factorial of the length of the input number and save it as numerator
      for(int i=str.size();i>0;i--) num = ((num%MOD)*(i%MOD))%MOD;

      //Final answer numerator * modulo_inverse_of_denominator
      long long res = ((num%MOD)*(modInverse(den,MOD)%MOD))%MOD;
      cout<<res<<"\n";
  }
  return 0;
}
