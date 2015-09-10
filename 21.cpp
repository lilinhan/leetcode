/*************************************************************************
  > File Name: 21.cpp
  > Author: lewin
  > Mail: lilinhan1303@gmail.com
  > Company:  Xiyou Linux Group
  > Created Time: 2015年09月10日 星期四 19时41分11秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            if( l1 == NULL && l2 == NULL )  {
                return NULL;
            }
            if( l1 == NULL ) {
                return l2;
            }
            if( l2 == NULL )  {
                return l1;
            }

            ListNode * head , *q = head;
            while( l1 != NULL && l2 != NULL )   {
                if( l1->val < l2->val )  {
                    q->next = l1;
                    l1 = l1->next;
                    q = q->next;
                }else {
                    q->next = l2;
                    l2 = l2->next;
                    q = q->next;
                }
            }


            if( l1 ) {
                q->next = l2;
            }
            if( l2 )  {
                q->next = l1;
            }

            return head;
        }
};


int main( int argc , char * argv[] )  {
    Solution a;

    return EXIT_SUCCESS;
}

