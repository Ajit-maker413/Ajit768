class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
       if (sum > 9 * num) return "";
      string s="";
      int nine=sum/9;
      int rem=sum%9;
      int index=0;
      while(nine>0)
      {
        s+='9';
        nine--;
        index++;
      }
      if(index==num && rem>0)
      {
        return "";
      }
       if (s.size() < num && rem > 0) {
            s += char('0' + rem);
        }

        while (s.size() < num) {
            s += '0';
        }
      return s;
        
    }
};