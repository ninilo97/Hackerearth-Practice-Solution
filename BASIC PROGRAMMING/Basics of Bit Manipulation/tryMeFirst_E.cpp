//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n; cout<<n<<" "<<(~n&((1<<(32-__builtin_clz(n)))-1));
  return 0;
}
