class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>v;
        long long l=0,c=0;
        for (long long r=0;r<s.size();r++){
            while (l<=r && v.count(s[r])==1){
                v.erase(s[l]);
                l++;
            }v.insert(s[r]);
            c=max(r-l+1,c);
        }return c;
    }
};
