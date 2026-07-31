class Solution {
public:
    int minimumPushes(string word) {
     map<char,int>om;
        for(int i=0;i<word.size();i++)
        {
           if(om.count(word[i]))
           {
            om[word[i]]++;
           }
           else
           {
            om.insert({word[i],1});
           }
        }
        vector<int>freq;
        vector<char>letter;
        for( auto it:om)
        {
            letter.push_back(it.first);
            freq.push_back(it.second);
        }        
        for(int i=0;i<freq.size();i++)
        {
            cout<<freq[i];
        }
        sort(freq.begin(),freq.end());
        reverse(freq.begin(),freq.end());
        cout<<endl;
        int count=0;
        int push=1;
        int ans=0;
        for(int i=0;i<freq.size();i++)
        {
            count++;
            ans += freq[i]*push;
            if(count==8)
            {
                count=0;
                push++;
            }
        }
   
       return ans;
        
    }
};