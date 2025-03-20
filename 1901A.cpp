#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int mx=vec[0];
        for(int i=1;i<n;i++){
            mx=max(mx,vec[i]-vec[i-1]);
        }
        mx=max(mx,2*(x-vec[n-1]));
        cout<<mx<<endl;
    }
}