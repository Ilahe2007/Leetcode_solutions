class Solution {
public:
    string reverseOnlyLetters(string s) {
        string a="";
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(islower(s[i]) or isupper(s[i])){
                v.push_back(s[i]);
            }
        }reverse(v.begin(),v.end());
        for(int i=0;i<s.size();i++){  
            if(!islower(s[i]) and !isupper(s[i])){
                v.insert(v.begin()+i,s[i]);
            }
        }for(int i=0;i<v.size();i++){
            a+=v[i];
        }return a;
    }
};
