//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1001;

int arr[MX],x;

int main(){
  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
  int n; cin>>n; while(n--){ cin>>x; arr[x]++; }
  int q; cin>>q; while(q--){ cin>>x; arr[x]?cout<<arr[x]<<'\n':cout<<"NOT PRESENT\n"; }
  return 0;
}
