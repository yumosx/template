class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int res = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
               continue;
            } else {
                ans.push_back(nums[i]);
                res++;
            }
        }
        nums = ans;
        return res;
    }
};