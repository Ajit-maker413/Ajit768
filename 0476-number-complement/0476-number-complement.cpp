class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        int pos = 0;

        while (num > 0) {
            int bit = num & 1;
            int newBit = bit ^ 1;

            ans = ans | (newBit << pos);

            num = num >> 1;
            pos++;
        }

        return ans;
    }
};