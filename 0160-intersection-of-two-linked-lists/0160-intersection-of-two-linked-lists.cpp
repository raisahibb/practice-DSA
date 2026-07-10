/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1 = 0;
        int count2 = 0;

        ListNode* ptr = headA;
        while(ptr!=nullptr)
        {
            count1++;
            ptr=ptr->next;
        }
        ptr = headA;

        ListNode* ptr1 = headB;
        while(ptr1!=nullptr)
        {
            count2++;
            ptr1=ptr1->next;
        }
        ptr1=headB;

        if(count2>count1)
        {
            int k = count2-count1;
            
            while(k)
            {
                ptr1=ptr1->next;
                k--;

            }
        }
        else if(count1>count2)
        {
            int k = count1-count2;

            while(k)
            {
                ptr=ptr->next;
                k--;
            }
        }

        while(ptr!=nullptr && ptr1!=nullptr)
        {
            if(ptr == ptr1)
            {
                return ptr;
            }
            ptr=ptr->next;
            ptr1=ptr1->next;
        }
        return nullptr;
    }
};