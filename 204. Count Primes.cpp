#define ll long long
class Solution {
public:
    int f(ll n){
        int c=0;
        bool prime[n+1];
        memset(prime,true,sizeof(prime));
        for(ll i=2;i<=sqrt(n);i++){
            if(prime[i]){
                for(ll j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }for(ll i=2;i<n;i++){
            if(prime[i]){
                c++;
            }
        }return c;
    }
    int countPrimes(int n) {
        return f(n);
    }
};
