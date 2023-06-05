class Solution {
public:
    bool checkPerfectNumber(int num) {
       if(num!=1){
            int c=0;
            for(int i=1;i<=sqrt(num);i++){
              if(num%i==0){
                   c+=i;
                   if(num/i!=i && num/i!=num){
                        c+=num/i;
                    }
                }
            }if(c==num){
                return true;
            }else{
                return false;
            }
       }else{
           return false;
       }
    }
};
