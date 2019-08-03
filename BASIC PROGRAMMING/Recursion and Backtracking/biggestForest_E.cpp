//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1000;

int n;
char forest[MX][MX];

int solveForests(int x,int y){
  if(x<n and y<n and x>=0 and y>=0 and forest[x][y]=='T'){
    forest[x][y]='W';
    return solveForests(x-1,y)+solveForests(x,y-1)+solveForests(x+1,y)+solveForests(x,y+1)+1;
  }
  else return 0;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int mx=0; cin>>n;
  for(int i=0;i<n;++i) for(int j=0;j<n;++j) cin>>forest[i][j];
  for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(forest[i][j]=='T') mx=max(mx,solveForests(i,j));
  cout<<mx;
  return 0;
}

