#include<bits/stdc++.h>
using namespace std;

struct ListNode{
	int val;
	ListNode *next;
	ListNode(){
		val = 0;
		next = NULL;
	}
	ListNode(int x){
		val = x;
		next = NULL;
	}
	ListNode(int x, ListNode *node){
		val = x;
		next = node;
	}
};

ListNode* removeDuplicates(ListNode *head){
	//this function detects all the duplicates of the linkwed list and keep only one entry of that element
	ListNode *ptr = head;
        ListNode *third, *cur, *nxt;
        while(ptr->next!=NULL && ptr!=NULL){
            cur = ptr;
            nxt = ptr->next;
            while(nxt->val == cur->val && nxt!=NULL && cur!=NULL){
                third = nxt->next;
                cur->next = third;
                nxt = third;
            }
            ptr = cur->next;
        }
        return head;
}

ListNode* deleteDuplicates(ListNode *head){
	//Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
	ListNode *node;
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *nxt;
        while(cur!=NULL){
            nxt = cur->next;
		if(nxt == NULL) break;
            int flag = 0;
            while(cur->val == nxt->val){
                flag++;
                node = nxt->next;
                nxt = nxt->next;
		if(nxt == NULL) break;
            }
            if(prev==NULL&&!flag){
                prev = head;
                cur = cur->next;
                continue;
            }
            else if(prev==NULL&&flag){
                head = node;
		cur = node;
                continue;
            }
            else if(prev!=NULL&&!flag){
                prev = cur;
                cur = cur->next;
                continue;
            }
            else if(prev!=NULL&&flag){
                prev->next = node;
                cur = node;
                continue;
            }
        }
        return head;
}

void printList(ListNode *head){
	cout<<"[ ";
	while(head!=NULL){
		if(head->next!=NULL)
			cout<<head->val<<", ";
		else
			cout<<head->val;
		head = head->next;
	}
	cout<<" ]"<<endl;
}


int main(){
	ListNode *head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(3);
	head->next->next->next->next = new ListNode(4);
	head->next->next->next->next->next = new ListNode(4);
	head->next->next->next->next->next->next = new ListNode(5);

	ListNode *root = new ListNode(1);
	root->next = new ListNode(2);
	root->next->next = new ListNode(3);
	root->next->next->next = new ListNode(3);
	root->next->next->next->next = new ListNode(4);
	root->next->next->next->next->next = new ListNode(4);
	root->next->next->next->next->next->next = new ListNode(5);

	cout<<"List before Processing in fun1"<<endl;
	printList(head);
	cout<<"list after processing in fun1"<<endl;
	head = removeDuplicates(head);
        printList(head);
        cout<<"List before Processing in fun1"<<endl;
	printList(root);
	cout<<"List after Processing in fun2"<<endl;
	root = deleteDuplicates(root);
	printList(root);


}
