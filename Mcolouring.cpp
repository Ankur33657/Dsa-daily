class Solution {
public:
    bool isSafe(int i,int j,int n,vector<string>&out){
        //horizontal;
        int col=j;
        while(col>=0){
            if(out[i][col]=='Q')return false;
            col--;
        }
        //arrow up
        int row=i;
        col=j;
        while(row>=0 && col>=0){
            if(out[row][col]=='Q')return false;
            row--;
            col--;
        }
        //arrow down
        row=i,col=j;
        while(row<n && col>=0){
            if(out[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int j,int n,vector<string>out,vector<vector<string>>&ans){
        if(j>=n){
            ans.push_back(out);
            return ;
        }
        for(int i=0;i<n;i++){
            if(isSafe(i,j,n,out)){
                out[i][j]='Q';
                solve(j+1,n,out,ans);
                out[i][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
       vector<vector<string>>ans;
       string str="";
       for(int i=0;i<n;i++){
        str+='.';
       }
       vector<string>out(n,str);
       solve(0,n,out,ans);
       return ans;

    }
};