//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int n;
bool grid[10][10];

bool isSafe(int row, int col){
  int i,j;
  for(i=0;i<row;++i) if(grid[i][col]) return false;
  for(i=row,j=col;i>=0 and j>=0;--i,--j) if(grid[i][j]) return false;
  for(i=row,j=col;i>=0 and j<n;--i,++j) if(grid[i][j]) return false;
  return true;
}

bool solveQueen(int row){
  if(row>=n) return true;
  for(int col=0;col<n;++col){
    if(isSafe(row,col)){
      grid[row][col]=true;
      if(solveQueen(row+1)) return true;
      grid[row][col]=false;
    }
  }
  return false;
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  cin>>n;
  if(solveQueen(0)){
    cout<<"YES\n";
    for(int i=0;i<n;++i){
      for(int j=0;j<n;++j) cout<<grid[i][j]<<" ";
      cout<<endl;
    }
  }
  else cout<<"NO\n";
  return 0;
}

