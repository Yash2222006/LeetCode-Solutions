class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;

       for(int i=0;i<k;i++){
        sum+=nums[i];
       }

     double avgsum=INT_MIN;
       avgsum=max(avgsum,sum);
       for(int i=k;i<nums.size();i++){
        sum=sum-nums[i-k]+nums[i];
        avgsum=max(avgsum,sum);
       }
       return avgsum/k;
    }
};