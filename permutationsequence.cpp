class Solution {
public:
    vector<int>nextpermutation(vector<int>&nums){
        int j=nums.size()-2;
        while(j>=0 && nums[j]>nums[j+1])j--;
        if(j<0){
            sort(nums.begin(),nums.end());
            return nums;
        }
        int mn=INT_MAX;
        int idx=-1;
        for(int i=j+1;i<nums.size();i++){
            if(mn > abs(nums[j]-nums[i]) && nums[i]>nums[j]){
                mn=abs(nums[j]-nums[i]);
                idx=i;
            }
        }
        swap(nums[j],nums[idx]);
        sort(nums.begin()+j+1,nums.end());
        return nums;

    }
    string getPermutation(int n, int k) {
        vector<int>vec;
        for(int i=1;i<=n;i++){
            vec.push_back(i);
        }
        if(n==1)return "1";
        
       k--;
       while(k--){
        // for(int i=0;i<vec.size();i++){
        //     cout<<vec[i]<<" ";
        // }
        // cout<<endl;
        nextpermutation(vec);
        
       }
        string ans="";
        for(int i=0;i<vec.size();i++){
            ans+=to_string(vec[i]);
        }
        return ans;

    }
};