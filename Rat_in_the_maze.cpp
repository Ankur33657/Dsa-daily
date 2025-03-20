class Solution {
  public:

    void solve(int i,int j,vector<vector<int>>&mat,string out,vector<string>&ans){
     int n=mat.size();
     if(i==n-1 && j==n-1 && mat[i][j]!=0){
        ans.push_back(out);
        return;
     }
     if((j+1)<n && mat[i][j+1]==1){
        out.push_back('R');
        solve(i,j+1,mat,out,ans);
        out.pop_back();
     }
     if((i+1)<n && mat[i+1][j]==1){
        out.push_back('D');
        solve(i+1,j,mat,out,ans);
        out.pop_back()
     }
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string>ans;
        string out="";
        solve(0,0,mat,out,ans);
    }
};