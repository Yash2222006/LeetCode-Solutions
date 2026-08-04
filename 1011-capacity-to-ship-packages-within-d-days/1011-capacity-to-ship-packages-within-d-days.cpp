class Solution {
public:
    bool isvalid(vector<int>& nums,int days,int mid){
        int total_day=1;
        int weight=0;

        for(int v: nums){
            if(v>mid)return false;
            if(weight+v>mid){
                total_day++;
                weight=v;
            }
            else{
                weight+=v;
            }
        }
        return total_day<=days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int end=0;
        int start=0;
        for(int i=0;i<nums.size();i++){
           end+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            start=max(start,nums[i]);
        }

      
      int ans;
       while(start<=end){
        int mid=start+(end-start)/2;
        if(isvalid(nums,days,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
       } 
       return ans;
    }
};