#include<iostream>
using namespace std;

//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  void printLL(ListNode* head)
  {
    ListNode* curr = head;
    while(curr)
    {
        cout<<curr->val<<" ";
        curr= curr->next;
    }
    cout<<endl;
  }

  ListNode* reverse(ListNode* head)
  {
    ListNode* curr = NULL;
    ListNode* temp = NULL;

    while(head)
    {
        curr = head->next;
        head->next = temp;
        temp = head;
        head = curr;
    }

    return temp;
  }

int main()
{
 ListNode *head = new ListNode(1);
 ListNode *temp1 = new ListNode(2);
 ListNode *temp2 = new ListNode(3);
 ListNode *temp3 = new ListNode(4);
 ListNode *temp4 = new ListNode(5);
 head->next = temp1;
 temp1->next = temp2;
 temp2->next = temp3;
 temp3->next = temp4;

 printLL(head);

 head = reverse(head);

 printLL(head);

 return 0;
}