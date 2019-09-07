//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;
const int MX = 1e6;
typedef vector<bool> vb;
typedef vector<vb> vvb;

int arr[40],n,m;
vector<int> factors[MX+1];

void acceptArray(int n){ for(int i=0;i<n;++i) cin>>arr[i]; }

void printMat(vvb const &matrix){
	for(auto row: matrix){ for(auto val:row) cout<<val<<" "; cout<<'\n'; }
	return;
}

vvb mulMat(vvb a, vvb b){
 	int r1=a.size(),r2=b.size(),c1=a[0].size(),c2=b[0].size();
 	vvb ans(r1,vb(c2));
 	for(int i=0;i<r1;i++) for(int j=0;j<c2;j++) for(int k=0;k<r2;k++) if(a[i][k]&b[k][j]){ ans[i][j]=true; break; }
 	return ans;
}

vvb powerMat(vvb mat,int p){
  if(p==1) return mat;
  vvb ans=powerMat(mat,p>>1);
  ans=mulMat(ans,ans);
  if(p%2) ans=mulMat(mat,ans);
  return ans;
}

bool solveMovement(){
  vvb mat(n,vb(n,0));
  for(int i=0;i<n;++i) for(auto f:factors[arr[i]]){
    if(i+f<n) mat[i][i+f]=1;
    if(i-f>=0) mat[i][i-f]=1;
  }
  mat = powerMat(mat,m);
  return mat[0][n-1];
}

int main(){
  int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
  for(int i:primes) for(int j=i;j<=MX;j+=i) factors[j].emplace_back(i);

  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin>>t; while(t--){
    cin>>n; acceptArray(n); cin>>m; cout<<(solveMovement()?"YES\n":"NO\n");
  }
  return 0;
}
