class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> count(101, 0);
        for(int num : nums) {
            count[num]++;
        }

        vector<int> ans;
        ans.reserve(nums.size());

        while (ans.size() < nums.size()) {
            for (int val = 1; val <= 100; ++val) {
                if (count[val] > 0) {
                    ans.push_back(val);
                    count[val]--;
                }
            }
        }

        return ans;
        
    }
};