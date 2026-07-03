class Solution {
public:
    bool isUgly(int n) 
    {
        if (n <= 0) return false;       //If not have any rpime no. or rather don't have any other prime no. as factor other than 2,3,5.
        while(n > 1)
        {
            if (n % 2 == 0) n = n / 2;
            else if (n % 3 == 0) n = n / 3;
            else if (n % 5 == 0) n = n / 5;
            else break;
        }
        return (n == 1);
    }
};