class Solution {
public:
    int heightChecker(vector<int>& heights) {
        long long n=heights.size(),c=0;
        vector<long long>a;
        for(long long i=0;i<n;i++){
            a.push_back(heights[i]);
        }sort(a.begin(),a.end());
        for (long long i=0;i<n;i++){
            if(a[i]!=heights[i]){
                c++;
            }
        }return c;
    }
};
