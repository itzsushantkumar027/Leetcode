class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a;
        // if(hour == 12){
        //  a = 0 ;
        // }
         a = 30 * hour;
        double b = 5.5 * minutes;
        double ans;
        if(a > b) ans = a-b;
        else ans = b - a;

        if( ans > 180) return 360 - ans;
    return ans;   
    }
};