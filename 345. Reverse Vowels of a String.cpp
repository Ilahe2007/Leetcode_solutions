class Solution {
public:
    string reverseVowels(string s){
        unordered_set<char>vowels={'A','E','O','U','I','a','e','o','i','u'};
        stack<char>a;
        for(int i=0;i<s.size();i++){
            if(vowels.count(s[i])==1){
                a.push(s[i]);
            }
        }for(int i=0;i<s.size();i++){
            if(vowels.count(s[i])==1){
                s[i]=a.top();
                a.pop();
            }
        }return s;
    }
};
