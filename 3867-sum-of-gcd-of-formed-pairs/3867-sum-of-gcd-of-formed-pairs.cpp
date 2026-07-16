class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int  Max = nums[0];
        vector<int>v;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > Max) {
                Max = nums[i];
            }
            int  temp = gcd(nums[i], Max);
            v.push_back(temp);
        }

        sort(v.begin(), v.end());
        long long sum = 0;
        int start = 0;
        int end = v.size() - 1;
        while (start < end) {
            sum += gcd(v[start], v[end]);
            start++;
            end--;
        }
        return sum;
    }
};