class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0 = 0, num1 = 0, num2 = 0;
        for (int k = 0, n = nums.size(); k < n; ++k) {
            if (nums[k] == 0) ++num0;
            else if (nums[k] == 1) ++num1;
            else ++num2;
        }
        for (int k = 0; k < num0; ++k) {
            nums[k] = 0;
        }
        for (int k = num0; k < num0 + num1; ++k) {
            nums[k] = 1;
        }
        for (int k = num0 + num1; k < num0 + num1 + num2; ++k) {
            nums[k] = 2;
        }
    }
};