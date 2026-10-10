class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> map = {{'I', 1},   {'V', 5},   {'X', 10},
                                        {'L', 50},  {'C', 100}, {'D', 500},
                                        {'M', 1000}};
       int size = s.length();
        int sum = map[s[size - 1]];
       
        for (int i = size - 1; i > 0; i--) {

            if (map[s[i-1]] < map[s[i]])
            {
                sum=sum-map[s[i-1]];
            }
            else
            {
                sum = sum + map[s[i-1]];
            }
        }
        return sum;
    }
};