#include<bits/stdc++.h>
using namespace std;
ListNode* reverseList(ListNode* head) {
        ListNode * prev = NULL;
        ListNode *curr = head;
        while(curr!=NULL){
            ListNode * forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
int main(){
    return 0;
}