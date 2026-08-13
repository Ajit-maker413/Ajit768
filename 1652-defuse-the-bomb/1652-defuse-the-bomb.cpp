class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> v;
        if (k > 0)
         {
            for (int i = 0; i < n; i++)
             {
                int sum = 0;
                int j = (i + 1) % n;
                int count = 0;
                while (count < k)
                 {
                    sum += code[j];
                    j = (j + 1) % n;
                    count++;
                }
                v.push_back(sum);
            }
        }
        else if(k<0)
        {
            for (int i = 0; i < n; i++)
             {
                int sum = 0;
                int j = (i - 1 + n) % n;
                int count = 0;
                while (count < abs(k))
                {
                    sum += code[j];
                    j = (j -1 + n) % n;
                    count++;
                }
                v.push_back(sum);
            }

        }
        else
        {
             for (int i = 0; i < n; i++)
             {
                v.push_back(0);
             }
        }

        return v;
    }
};