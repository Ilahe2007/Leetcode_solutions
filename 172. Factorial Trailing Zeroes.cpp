class Solution {
public:
    int trailingZeroes(int n) {
        int m=5,c=0;
        while (n>=m){
            c=c+n/m;
            m=m*5;
        }return c;
    }
};
