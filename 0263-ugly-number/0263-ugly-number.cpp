class Solution {
public:
    bool isUgly(int n) {
        if (n == 0) return false;
        if (n == 1) return true;
        while (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
            if (n % 30 == 0) n /= 30;
            if (n % 15 == 0) n /= 15;
            if (n % 6 == 0) n /= 6;
            if (n % 5 == 0) n /= 5;
            if (n % 3 == 0) n /= 3;
            if (n % 2 == 0) n /= 2;

            if (n == 1) return true;
        }

        return false;
    }
};