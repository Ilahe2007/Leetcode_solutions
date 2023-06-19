class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        nums.push_back(0);
        sort(nums.begin(),nums.end());
        int a=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                a=i;
                break;
            }
        }if(a!=0 and a!=nums.size()-1){
            if(min(abs(nums[a]-nums[a-1]),abs(nums[a]-nums[a+1]))==abs(nums[a-1]) and abs(nums[a-1])!=abs(nums[a+1])){
                return nums[a-1];
            }else if(min(abs(nums[a]-nums[a-1]),abs(nums[a]-nums[a+1]))==abs(nums[a+1]) and abs(nums[a-1])!=abs(nums[a+1])){
                return nums[a+1];
            }else{
                return max(nums[a+1],nums[a-1]);
            }
        }else{
            if(a==0)           return  nums[a+1];
            else        return nums[a-1];
        }
    }
};
