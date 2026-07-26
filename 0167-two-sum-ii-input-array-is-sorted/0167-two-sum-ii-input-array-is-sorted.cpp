class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int p=0;
        int q=numbers.size()-1;

        while(p<q){

            int a=numbers[p]+numbers[q];
            if(target==a)return{p+1,q+1};
            else if(target<a) q--;
            else p++;
          
        }
          return {};
    }
};