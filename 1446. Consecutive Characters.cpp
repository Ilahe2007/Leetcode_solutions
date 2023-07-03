class Solution {
public:
    int maxPower(string s) {
        int c=0,max=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                if(c==0)    c+=2;
                else        c+=1;
                if(max<=c){
                    max=c;
                }
            }else{
                c=0;
            }
        }if(max!=0) return max;
        else    return 1;
    }
};
