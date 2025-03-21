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
        sort(vec.begin(),vec.end());
        vector<int>r1,r2;
        r2.push_back(vec[n-1]);
        int i=n-2;
        while(i>=0 && vec[i]==vec[i+1]){
         r2.push_back(vec[i]);
         i--;
        }
        if(i<0)cout<<"-1"<<endl;
        else{
            r1=vector<int>(vec.begin(),vec.begin()+i+1);
            cout<<r1.size()<<" "<<r2.size()<<endl;
            for(auto it:r1){
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it:r2){
                cout<<it<<" ";
            }
            cout<<endl;
        }
       
    }
}