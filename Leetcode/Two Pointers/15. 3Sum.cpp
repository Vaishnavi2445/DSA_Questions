class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int left = i+1, right = n-1;
            int sum = 0;
            while(left < right){
                sum = nums[i] + nums[left] + nums[right];
                if(sum < 0){
                    left++;
                } else if(sum > 0) {
                    right--;
                } else{
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]) {
                        left++;
                    }
                    while(left < right && nums[right] == nums[right+1]){
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};
