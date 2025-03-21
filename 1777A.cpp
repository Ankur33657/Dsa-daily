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
        int steps=0;
        for(int i=0;i<vec.size()-1;i++){
           if(vec[i]%2==0){
            if(vec[i+1]%2==0){
                steps++;
                int v1=vec[i+1];
                vec.erase(vec.begin()+i+1);
                vec[i]=vec[i]*v1;
                i--;
            }
           }
           else{
            if(vec[i+1]%2!=0){
                steps++;
                int v1=vec[i+1];
                vec.erase(vec.begin()+i+1);
                vec[i]=vec[i]*v1;
                i--;
            }
           }
        }
        cout<<steps<<endl;
    }
}