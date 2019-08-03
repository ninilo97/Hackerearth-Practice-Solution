//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int n,res;
bool grid[10][10];
int xM[] = {1,2,2,1,-1,-2,-2,-1};
int yM[] = {-2,-1,1,2,2,1,-1,-2};

bool isSafe(int row, int col){ return (row<10 and col<10 and row>=0 and col>=0); }

void solveKnight(int i, int j, int n){
  if(n==0){ if(grid[i][j]==0) grid[i][j]=1, res++; return; }
  for(int idx=0;idx<8;++idx){
      if(isSafe(i+xM[idx],j+yM[idx])){
        solveKnight(i+xM[idx],j+yM[idx],n-1);
      }
  }
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int i,j; cin>>i>>j>>n; solveKnight(--i,--j,n);
  cout<<res;
  return 0;
}

