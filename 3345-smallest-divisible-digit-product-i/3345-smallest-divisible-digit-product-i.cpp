class Solution {
public:
    int smallestNumber(int n, int t) {
        int x;
        
        for(int i=n;i<n+10;i++){
        int digit1 = i/10;
        int digit2 = i%10;
        if(i < 10){
            if(i %  t== 0){
            x=i;
            break;
            }
        }
        else if(digit1 * digit2 % t == 0){
            x=i;
            break;
        }
        }
        return x;
    }
};