//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

char arr[5][5];

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    for(int i=1;i<=4;++i){
      for(int j=1;j<=4;++j){
        cin>>arr[i][j];
      }
    }
    bool flg=false;
    for(int i=1;i<3 and flg==false;++i){
      for(int j=1;j<3 and flg==false;++j){
        if(arr[i][j]=='.' and arr[i+1][j]=='x' and arr[i+2][j]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j]=='.' and arr[i+2][j]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j]=='x' and arr[i+2][j]=='.') flg=true;

        if(arr[i][j]=='.' and arr[i][j+1]=='x' and arr[i][j+2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i][j+1]=='.' and arr[i][j+2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i][j+1]=='x' and arr[i][j+2]=='.') flg=true;

        if(arr[i][j]=='.' and arr[i+1][j+1]=='x' and arr[i+2][j+2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j+1]=='.' and arr[i+2][j+2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j+1]=='x' and arr[i+2][j+2]=='.') flg=true;
      }
    }
    for(int i=1;i<3 and flg==false;++i){
      for(int j=3;j<5 and flg==false;++j){
        if(arr[i][j]=='.' and arr[i+1][j-1]=='x' and arr[i+2][j-2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j-1]=='.' and arr[i+2][j-2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j-1]=='x' and arr[i+2][j-2]=='.') flg=true;

        if(arr[i][j]=='.' and arr[i+1][j]=='x' and arr[i+2][j]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j]=='.' and arr[i+2][j]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i+1][j]=='x' and arr[i+2][j]=='.') flg=true;
      }
    }
    for(int i=3;i<5 and flg==false;++i){
      for(int j=1;j<3 and flg==false;++j){
        if(arr[i][j]=='.' and arr[i][j+1]=='x' and arr[i][j+2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i][j+1]=='.' and arr[i][j+2]=='x') flg=true;
        if(arr[i][j]=='x' and arr[i][j+1]=='x' and arr[i][j+2]=='.') flg=true;
      }
    }
    flg?cout<<"YES\n":cout<<"NO\n";
  }
  return 0;
}
