class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target){
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]+v[j]==target){
                    return {i,j};
                    break;
                }
            }
        }return {-1,-1};
    }
};
