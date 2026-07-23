class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.length();
        if(l==0)return 0;
        if(l==1)return 1;
        int i=0;
        int j=0;
        int ans=0;
      while(j!=l-1){
        string str=s.substr(i,j-i+1);
        int idx=str.find(s[j+1]);

        if(idx==-1){
            j++;
        }
        else{
           i++;
        }
        ans=max(ans,j-i+1);
      }
      return ans;
    }
};