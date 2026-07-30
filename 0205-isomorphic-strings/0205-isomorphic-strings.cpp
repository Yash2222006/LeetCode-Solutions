class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;

        for(int i=0;i<s.size();i++){
             m1.emplace(s[i],t[i]);
             m2.emplace(t[i],s[i]);
        }
        for(int i=0;i<s.size();i++){
            auto idx1=m1.find(s[i]);
            auto idx2=m2.find(t[i]);
            if( idx1->second!=t[i] || idx2->second!=s[i])return false;
        }
        return true;
    }
};