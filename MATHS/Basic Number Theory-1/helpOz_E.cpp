//@author Nikhil Londhe
#include<bits/stdc++.h>
using namespace std;

int GCD(int A, int B) {
    return B == 0? A : GCD(B, A % B);
}

void printFac(int num){
    if(num > 1){
        for(int i=2;i<=num;++i){
            if(num%i==0) cout<<i<<" ";
        }
    }
}

int main(){
    int m; cin>>m;
    vector<int> vec, diff; vec.resize(m); diff.resize(m);

    for(int i=0;i<m;++i) cin>>vec[i];

    diff[m-1]=abs(vec[m-1]-vec[0]); for(int i=0;i<m-1;++i) { diff[i]=abs(vec[i]-vec[i+1]); }

    int g=(m==2)?diff[0]:GCD(diff[0],diff[1]);

    if(m>3) for(int i=2;i<m;++i) g = GCD(g,diff[i]);

    printFac(g);
    return 0;
}
