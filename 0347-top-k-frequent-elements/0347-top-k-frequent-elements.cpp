class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            auto idx=m.find(nums[i]);
            if(idx==m.end()){
                m.emplace(nums[i],1);
            }
            else{
                idx->second++;
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i=m.begin();i!=m.end();++i){
            if(pq.size()<k){
             pq.push({i->second,i->first});}
             else{
                if(pq.top().first<i->second){
                    pq.pop();
                    pq.push({i->second,i->first});
                }
             }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

          return ans;
    }
};