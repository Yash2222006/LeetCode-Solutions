class Solution {
public:
    bool isvalid(vector<int>&piles,int h,int mid){
        long long x=0;
        for(int i=0;i<piles.size();i++){ 
            if(piles[i]%mid==0)x+=(piles[i]/mid);
            else x+=(piles[i]/mid)+1;
        }
        if(x>h)return false;
        else return true;
    } 
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=INT_MIN;
       for(int i=0;i<piles.size();i++){
         end=max(end,piles[i]);
       }
       end+=1;
       int ans;
       while(start<=end){
        int mid=start+(end-start)/2;
        if(isvalid(piles,h,mid)){
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