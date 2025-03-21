#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&vec){
    int sm=0;
    for(int i=0;i<vec.size();i++){
        sm^=vec[i];
    }
    return sm;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int val=solve(vec);
        if(n%2==0){
            if(val==0)cout<<"1"<<endl;
            else{
                cout<<"-1"<<endl;
            }
        }
        else{
           cout<<val<<endl;
        }
    }
}