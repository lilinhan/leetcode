/*************************************************************************
    > File Name: 19.cpp
    > Author: lewin
    > Mail: lilinhan1303@gmail.com
    > Company:  Xiyou Linux Group
    > Created Time: 2015年09月12日 星期六 14时37分06秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstdlib>
#include<cerrno>

#define NUM 5

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * p = head ,*q = head;
        if(!head)  {
            return NULL;
        }

        int count = 0;
        while(q != NULL)  {
            count++;
        }
        for(int i = 0 ; i < count-n ; i++)  {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        free(q);

        return head;
    }
};

int main( int argc , char * argv[] )  {
    ListNode * head , *p,*q;
    p = q = new ListNode();
    p -> val = 0;

    for( int i = 1 ; i < NUM ; i++)  {
        p = new ListNode();
        p->val = i;

    }
    return EXIT_SUCCESS;
}

