class Solution {
public:
    int trap(vector<int>& height) {
        int ans = calc(height, 0);
        reverse(height.begin(), height.end());
        return ans + calc(height, 1);
    }
    int calc(vector<int>& height, int flag) {
        int n = height.size(), sum[n], max_p = 0;
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i) sum[i] = sum[i-1] + height[i];
            else sum[i] = height[i];
            if ((height[i] > height[max_p]) || ((height[i] == height[max_p]) && flag)) {
                if (i > 0)
                    ans += 1ll * (i - max_p) * height[max_p] - (sum[i - 1] - ((max_p - 1 >= 0) ? sum[max_p - 1] : 0));
                max_p = i;
            }
        }
        return ans;
    }
};