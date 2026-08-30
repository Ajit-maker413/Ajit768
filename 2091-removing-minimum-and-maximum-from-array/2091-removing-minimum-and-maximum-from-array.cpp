class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minVal = nums[0];
        int min_id=0;
        int maxVal = nums[0];
        int max_id=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                max_id = i;
                maxVal = nums[i];
            }
            if (nums[i] < minVal) {
                min_id = i;
                minVal = nums[i];
            }
        }

        int right_min = nums.size() - min_id;
        int right_max = nums.size() - max_id;
        cout << min_id;
        cout << right_min;

        cout << endl;
        cout << max_id;
        cout << right_max;

        // case 1 LL
        int LLremove;
        int LL = 0;
        if (min_id < max_id) {
            LLremove = min_id + 1;
            LL = LLremove;
            LLremove = max_id - LLremove + 1;
            LL += LLremove;

        } else {
            LLremove = max_id + 1;
            LL = LLremove;
            LLremove = min_id - LLremove + 1;

            LL += LLremove;
        }

        // case 2 RR
        int RRremove;
        int RR = 0;
        if (right_min < right_max) {
            RRremove = right_min;
            RR = RRremove;
            RRremove = right_max - right_min;
            RR += RRremove;

        } else {
            RRremove = right_max;
            RR = RRremove;
            RRremove = right_min - right_max;
            RR += RRremove;
        }

        // Case LR
        int LR = 0;

        if (min_id < max_id) {
            LR = (min_id + 1) + (nums.size() - max_id);
        } else {
            LR = (max_id + 1) + (nums.size() - min_id);
        }

    return min({LL,RR,LR});
    }
};