class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }vector<int>v(s.begin(),s.end());
        if(s.size()<=2){
            return -1;
        }else{
            return v[1];
        }
    }
};
