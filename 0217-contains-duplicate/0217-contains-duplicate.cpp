class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    int a=nums[0];
    unordered_map<int,int> m;
    for(int i=0;i<nums.size();i++){

        auto idx=m.find(nums[i]);
        if(idx==m.end()){
          m.emplace(nums[i],1);
          continue;
        }
        else{
            idx->second=idx->second+1;
        }

        if(idx->second>=2)return true;
    }
return false;
    }
};