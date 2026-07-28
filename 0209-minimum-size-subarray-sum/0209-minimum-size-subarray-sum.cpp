class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int s=nums.size();
       int sum=nums[0];
       int p=0;
       int q=0;
       int ans=INT_MAX;
       while(q<s && p<=q){
        if(sum>=target){
            ans=min(ans,q-p+1);
            if(p==q){
               return ans;
            }
            else{
                sum-=nums[p];
                p++;

            } 
        }
        else{
            if(q==s-1 && p==0)return 0;
            else if(q==s-1)return ans;
            else{
             q++;
             sum+=nums[q];}
        }
       }
       return ans;
    }
};