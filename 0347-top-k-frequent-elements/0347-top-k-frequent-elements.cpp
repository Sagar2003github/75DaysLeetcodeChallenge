class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        vector<pair<int,int>> p;
        for(auto&x:f){
            p.push_back({x.second,x.first});
        }
        sort(p.rbegin(),p.rend());
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(p[i].second);
        }
        return res;
    }
};