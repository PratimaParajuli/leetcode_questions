class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        vector<int>  value = nums;

        int n = nums.size();
        int base_equals = 0;

        unordered_map<long long, int> gain_map;

        auto get_key = [](int x, int y ) -> long long {
            return ((long long)x << 32) | (unsigned int)y;
        };
        
        for (int i = 0; i < n-1; ++i) {
            if(nums[i] == nums[i + 1]){
                base_equals++;
            } else {
                int a = nums[i];
                int b = nums[i + 1];

                gain_map[get_key(a, b)]++;

                gain_map[get_key(b, a)]++;
            }
        }

        int max_gain = 0;
        for (const auto& [key, count] : gain_map) {
            max_gain = max(max_gain, count);
        }
        return base_equals + max_gain;
    }
};