#include<bits/stdc++.h>
using namespace std;
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
        vector<int>res;
        res.push_back(vec[0]);
        for(int i=1;i<n;i++){
            if(vec[i]>=vec[i-1])res.push_back(vec[i]);
            else{
                res.push_back(vec[i]);
                res.push_back(vec[i]);
            }
        }
        cout<<res.size()<<endl;
        for(auto it:res){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}