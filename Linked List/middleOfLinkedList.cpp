#include<bits/stdc++.h>
using namespace std;
ListNode* middleNode(ListNode* head) {
        ListNode * slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
int main(){
    return 0;
}