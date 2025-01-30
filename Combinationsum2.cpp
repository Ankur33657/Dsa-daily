class Solution {
public:
    void solve(int i,vector<int>&candidates,int tar,vector<int>out,vector<vector<int>>&ans){
        if(tar==0){
            ans.push_back(out);
            return ;
        }
        if(i>=candidates.size())return ;
        int idx=i+1;
        while(idx<candidates.size() && candidates[idx]==candidates[idx-1])idx++;
        solve(idx,candidates,tar,out,ans);
        if(tar>=candidates[i]){
            out.push_back(candidates[i]);
            tar-=candidates[i];
            solve(i+1,candidates,tar,out,ans);
            tar+=candidates[i];
            out.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>out;
        solve(0,candidates,target,out,ans);
        return ans;
    }
};