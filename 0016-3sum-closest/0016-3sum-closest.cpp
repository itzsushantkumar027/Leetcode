class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int x = nums[0]+nums[1]+nums[2];

        for(int i=0;i<n-2;i++){
            int l= i+1, r= n-1;

            while(l<r){
                int sum= nums[l]+nums[i]+nums[r];
                if(abs(sum - target) < abs(x - target)){
                    x = sum;
                }
                if(sum < target) l++;
                else if(sum > target) r--;
                else return target;
            }
        }
        return x;
    }
};