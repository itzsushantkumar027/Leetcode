class Solution {
public:
    long long sumAndMultiply(int n) {
        long long a=1;
        long long sum=0;
        long long ans=0;
        while(n > 0){
            int d = n%10;
            if(d != 0){
                sum+=d;
                ans= a*d+ans;
                a*=10;
            }
            n=n/10;
       // ans=x.reverse();
        }
        return ans*sum;
    }
};