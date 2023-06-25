class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char l;
        int c=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                l=t[i];
                c++;
                break;
            }
        }if(c==0){
            return t[t.size()-1];
        }else{
            return l;
        }
    }
};
