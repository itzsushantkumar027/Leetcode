class Solution {
public:
    bool canWinNim(int n) {
    //     int a=1;
    //     int b=2;
    //     int c=3;
    //     while(n >= 0){
    //         if(a > n) return false;
    //         int x= n - a;
    //         int y= n - b;
    //         int z= n - c;
    //         if( x==0  || y==0 || z==0) return true;
    //         a+=6;
    //         b+=6;
    //         c+=6;
    //     }
    // return false;
    if( n%4 == 0) return false;
    else return true;
    }
};