class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> x;
        int n=nums.size();
        for(int i=0;i<n;i++){
           
            int c=target-nums[i];
            if(x.find(c)!=x.end()){
                return{x[c],i};
            }
             x[nums[i]]=i;
        }
        return {};
    }
};