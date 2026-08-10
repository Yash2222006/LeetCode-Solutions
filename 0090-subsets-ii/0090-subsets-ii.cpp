class Solution {
public:

     vector<vector<int>>subset(vector<int>& nums,vector<int> &ans,int i,vector<vector<int>> &v){
        
        if(i==nums.size()){
            v.push_back(ans);
            return v;
        }
        ans.push_back(nums[i]);
        subset(nums,ans,i+1,v);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size()&&nums[idx]==nums[idx-1])idx++;
        subset(nums,ans,idx,v);
        return v;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<vector<int>> result;
        return subset(nums,ans,0,result);
    }
};