//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    int arr[32]={0},n; cin>>n; while(n--){
      int x; cin>>x; for(int i=0;i<32;++i){
        if(x&(1<<i)) arr[i]++;
      }
    }
    cout<<max_element(arr,arr+32)-arr<<endl;
  }
  return 0;
}
