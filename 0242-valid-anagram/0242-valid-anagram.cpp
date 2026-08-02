class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            auto idx= m.find(s[i]);
            if(idx!=m.end())idx->second++;
            else{
                m.emplace(s[i],1);
            }
        }
        for(int i=0;i<t.size();i++){
            auto idx=m.find(t[i]);
            if(idx==m.end())return false;
            else{
                if(idx->second==0)return false;
                idx->second--;
            }
        }
      return true;
    }
};