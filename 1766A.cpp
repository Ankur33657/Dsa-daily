#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sm=0;
        while(n>9){
          sm+=9;
          n/=10;
        }
        sm+=n;
        cout<<sm<<endl;
    }
}