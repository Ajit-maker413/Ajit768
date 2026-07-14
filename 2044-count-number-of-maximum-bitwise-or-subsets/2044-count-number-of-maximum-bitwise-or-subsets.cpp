class Solution {
public:
   unordered_map<int,int>um;
   int Max=INT_MIN;
   void subset(vector<int>& nums,int i,int OR)
   {
    if(i==nums.size())
    {
     if(um.count(OR))
     {
        um[OR]++;
     }
     else
     {
        um.insert({OR,1});
     }
     Max=max(Max,OR);
     return;
    }
    subset( nums,i+1,OR|nums[i]);
    subset( nums,i+1,OR);


   }

    int countMaxOrSubsets(vector<int>& nums) {
        subset(nums,0,0);
        cout<<Max;
        return um[Max];
        
    }
};