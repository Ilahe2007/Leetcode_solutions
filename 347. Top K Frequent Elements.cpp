class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        map<int,int>m;
        vector<pair<int,int>>v;
        vector<int>v2;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }for(auto x:m){
            v.push_back({x.second,x.first});
        }sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(int i=k-1;i>=0;i--){
            v2.push_back(v[i].second);
        }return v2;
    }
};
