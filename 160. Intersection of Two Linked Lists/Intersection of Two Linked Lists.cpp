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
        
        int lenA = 0;
        int lenB = 0;
        ListNode* a = headA;
        ListNode* b = headB;
        
        while ( a != NULL )
        {
            a = a->next;
            lenA++;
        }
        
        while ( b != NULL )
        {
            b = b->next;
            lenB++;
        }
        
        int num = abs( lenB - lenA );
        
        if ( lenA > lenB )
        {
            while ( num > 0 ) 
            {
                headA = headA->next;
                num--;

            }               
            
        }
        else 
        {
            while ( num > 0 ) 
            {
                headB = headB->next;
                num--;
            }            
            
        }

        
        while( headA != NULL && headB != NULL ) 
        {
            if ( headA == headB ) return headA;
            headA = headA->next;
            headB = headB->next;
            
            
        }
        
        return NULL;
    }
};
