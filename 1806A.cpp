#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b){
            cout<<"-1"<<endl;
        }
        else{
            int steps=d-b;
            a+=steps;
            if(a<c)cout<<"-1"<<endl;
            else{
                steps+=(a-c);
                cout<<steps<<endl;
            }
        }

    }
}