#include<bits/stdc++.h>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() {
          this->val = 0;
          this->next = NULL;
      }
      ListNode(int x){
          this->val = x;
          this->next = NULL;
      }
      ListNode(int x, ListNode *next){
          this->val = x;
          this->next = next;
      }
  };
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *start;
        ListNode *end;
        ListNode *node = head;
        int t = k;
        int l = 0;
        while(node!=NULL){
            
            if(l==k-1) start = node;
            node = node->next;
            l++;
        }
        int index = l-k;
        end = head;
        while(index--){
            end = end->next;
        }
        int temp = start->val;
        start->val = end->val;
        end->val = temp;
        return head;
    }
};

void createList(vector<int>& nums, ListNode* &head){
    head = NULL;
    ListNode *cur = NULL;
    for(auto num : nums){
        if(head==NULL){
            head = new ListNode(num);
            cur = head;
        }
        else{
            cur->next = new ListNode(num);
            cur = cur->next;
        }
    }
}

void printList(ListNode *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}
int main(){
    ListNode *head = NULL;
    vector<int> nums = {5, 8, 4, 2, 6};
    //vector<int> nums = {1, 2};
    createList(nums, head);
    //printList(head);
    Solution s1;
    ListNode *found = s1.swapNodes(head, 2);
    printList(found);
    return 0;
}