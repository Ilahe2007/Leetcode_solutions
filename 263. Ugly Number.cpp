class Solution {
public:
    bool isUgly(int n) {
        int i=2;
        set<int>s;
        bool a=false;
        if(n==1){
            return true;
        }else{
            while(i<=sqrt(n)){
                if(n%i==0){
                    if(i==2 or i==3 or i==5){
                        s.insert(i);
                        n=n/i;
                    }else{
                        break;
                    }
                }else if(i==2){
                    i=3;
                }else{
                    i+=2;
                }
            }s.insert(n);
            if(s.count(2)+s.count(3)+s.count(5)==s.size()){
                return true;
            }else{
                return false;
            }
        }
    }
};
