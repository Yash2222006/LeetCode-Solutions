class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> x(nums.size(),0);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(x[nums[i]-1]==0) x[nums[i]-1]=1;
            else{ans.push_back(nums[i]);}
        }
         return ans;
    }
};