//@author Nikhil Londhe
#include <bits/stdc++.h>
using namespace std;
const int MX = 1e5;

int arr[MX+1];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k; cin>>n>>k; for(int i=0;i<n;++i) cin>>arr[i];
    cout<<*max_element(arr+(n-k-1)/2,arr+(n-(n-k)/2));
    return 0;
}
