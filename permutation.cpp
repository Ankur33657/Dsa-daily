class Solution {
public:
    void solve(int i,vector<int>&nums,vector<int>out,vector<vector<int>>&ans){
        if(i>=nums.size()){
            ans.push_back(out);
            return;
        }
        int idx=i;
        for(int j=idx;j<nums.size();j++){
            swap(out[idx],out[j]);
            solve(idx+1,nums,out,ans);
            swap(out[idx],out[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>out;
        solve(0,nums,nums,ans);
        return ans;
    }
};