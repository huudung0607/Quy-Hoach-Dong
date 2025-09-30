class Solution {
public:
    bool canPartition(vector<int>& nums) {
        bool dp[1005];
        int sum = 0;
        for(int i =0; i < nums.size();i++){
            sum += nums[i];
        }
        if(sum % 2 == 0){
            long long k = sum % 2;
            dp[0] = true;
            for(int i = 0;i < nums.size();i++){
                for(int j = k; j >= nums[i];j--){
                    if(dp[j - nums[i]]){
                        dp[j] = true;
                    }
                }
            }
            return dp[k];
        }
        else return false;
    }
};
