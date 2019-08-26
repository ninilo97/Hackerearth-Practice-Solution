//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7;

map<char,int> mpp = {{ '0' , 0 },{ '1' , 1 },{ '2' , 2 },{ '3' , 3 },{ '4' , 4 },{ '5' , 5 },{ '6' , 6 },{ '7' , 7 },{ '8' , 8 },{ '9' , 9 },{ 'A' , 10 },{ 'B' , 11 },{ 'C' , 12 },{ 'D' , 13 },{ 'E' , 14 },{ 'F' , 15 },{ 'G' , 16 },{ 'H' , 17 },{ 'I' , 18 },{ 'J' , 19 },{ 'K' , 20 },{ 'L' , 21 },{ 'M' , 22 },{ 'N' , 23 },{ 'O' , 24 },{ 'P' , 25 },{ 'Q' , 26 },{ 'R' , 27 },{ 'S' , 28 },{ 'T' , 29 },{ 'U' , 30 },{ 'V' , 31 },{ 'W' , 32 },{ 'X' , 33 },{ 'Y' , 34 },{ 'Z' , 35 },{ 'a' , 36 },{ 'b' , 37 },{ 'c' , 38 },{ 'd' , 39 },{ 'e' , 40 },{ 'f' , 41 },{ 'g' , 42 },{ 'h' , 43 },{ 'i' , 44 },{ 'j' , 45 },{ 'k' , 46 },{ 'l' , 47 },{ 'm' , 48 },{ 'n' , 49 },{ 'o' , 50 },{ 'p' , 51 },{ 'q' , 52 },{ 'r' , 53 },{ 's' , 54 },{ 't' , 55 },{ 'u' , 56 },{ 'v' , 57 },{ 'w' , 58 },{ 'x' , 59 },{ 'y' , 60 },{ 'z' , 61 },{ '-' , 62 },{ '_' , 63 },};

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
  	ll cnt=0,res=1; string str; cin>>str;
  	for(char s:str) cnt+=(6-__builtin_popcount(mpp[s]));
  	while(cnt--) res=((res<<1)+res)%MOD;
  	cout<<res<<endl;
  }
  return 0;
}
