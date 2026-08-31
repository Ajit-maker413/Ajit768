/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int prev=head->val;
        ListNode* temp=head->next;
        vector<int>v;
        vector<int>vv;
        int count=1;
        while(temp->next!= NULL)
        {
           
                if(temp->val > prev  && temp->val > temp->next->val)
                {
                    vv.push_back(count+1);
                    v.push_back(temp->val);
                }
                else if( temp->val < prev  && temp->val < temp->next->val)
                {
                  vv.push_back(count+1);
                  v.push_back(temp->val); 
                }
                count++;
            prev=temp->val;
            temp=temp->next;
            
        }

        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i];
        }
        vector<int>res;
        if(v.size()<2)
        {
            v.push_back(-1);
            v.push_back(-1);

            res.push_back(-1);
            res.push_back(-1);


        }
        else
        {
           int i=vv.size()-1;
           int min=INT_MAX;
           for(int j=0;j<vv.size()-1;j++)
           {
            int temp=vv[j+1]-vv[j];
            if(temp<=min)
            {
                min=temp;
            }

           }
           res.push_back(min);
           res.push_back(vv[i]-vv[0]);
        }
        cout<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i];
        }

        return res;
        
    }
};