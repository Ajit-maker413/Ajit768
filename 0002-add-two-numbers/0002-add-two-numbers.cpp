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
    void insert_element(vector<int>* v, ListNode*& list) {
        if (list == NULL) {
            return;
        }
        ListNode* temp = list;
        while (1) {
            if (temp->next == NULL) {
                v->push_back(temp->val);
                break;
            } else {
                v->push_back(temp->val);
                temp = temp->next;
            }
        }
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        insert_element(&v1, l1);
        insert_element(&v2, l2);
        int big = (v1.size() > v2.size()) ? v1.size() : v2.size();
        int sum = 0, carry = 0;
        for (int i = 0; i < big; i++) {
            int digit1 = (i < v1.size()) ? v1[i] : 0;
            int digit2 = (i < v2.size()) ? v2[i] : 0;
            sum = sum + digit1 + digit2 + carry;
            carry=0;
            if (sum > 9) {
                carry = sum / 10;
                sum = sum % 10;
            }
            v3.push_back(sum);
            sum = 0;

        }
       if (carry > 0) {
            v3.push_back(carry);
        }
        ListNode* head = NULL;
        for (int i = 0; i < v3.size(); i++) 
        {
            ListNode* list3 = new ListNode(v3[i]);
            ListNode* temp;
            if (head == NULL)
             {
                head = list3;
            }
            else
            {
                temp=head;
                while(temp ->next!=0)
                {
                    temp=temp ->next;
                }
                temp ->next=list3;
            }
        }
        
        return head;
    }
};