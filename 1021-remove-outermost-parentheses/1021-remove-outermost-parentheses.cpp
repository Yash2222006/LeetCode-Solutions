class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> p;
        int n=s.size();
        if(n==0)return "";
        int i=0;
        int j=0;
       int count1=1;
        int count2=0;
        while(i<n){
            if(i==j)j++;
            
            if(s[j]=='('){
                count1++;
                p.push(s[j]);
            }
            else{
                count2++;
                p.push(s[j]);
            }

             if(count1==count2){
                p.pop();
                j++;
                i=j;
                count1=1;
                count2=0;
                continue;
            }
            j++;
        }
          string result="";
          while(!p.empty()){
                 result+=p.top();
                 p.pop();
          }
          reverse(result.begin(),result.end());
            
return result;

    }
};