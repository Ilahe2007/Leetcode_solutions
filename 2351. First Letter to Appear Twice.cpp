class Solution {
public:
    char repeatedCharacter(string s) {
        char a;
        set<char>x;
        x.insert(s[0]);
        for(int i=1;i<s.size();i++){
            if(x.count(s[i])==0){
                x.insert(s[i]);
            }else{
                a=s[i];
                break;
            }
        }return a;
    }
};
