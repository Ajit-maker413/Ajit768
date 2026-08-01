class Solution {
public:
    string largestMerge(string word1, string word2) {
        int i=0;
        int j=0;
        string merge;
        while(i<word1.size() && j<word2.size())
        {
            if( word1[i] > word2[j] )
            {
                merge += word1[i];
                i++;
            }
            else if(word1[i] < word2[j])
            {
                merge += word2[j];
                j++;
            }
            else
            {
                int x=i;
                int y=j;
              string temp1;
              string temp2;
              while(x<word1.size() && y <word2.size() && word1[x] == word2[y] )
              {
                temp1+=word1[x];
                x++;
                temp2 +=word2[y];
                y++;
              }
              if(word1[x]>word2[y])
              {
                merge+=word1[i];
                i++;
              }
              else
              {
                merge+=word2[j];
                j++;
              }
            }
        }
        if(i != word1.size())
        {
           while(i< word1.size())
           {
            merge+=word1[i];
            i++;
           }
        }
        else
        {
             while(j< word2.size())
           {
            merge+=word2[j];
            j++;
           }

        }
        return merge;
        
    }
};