/* Deleting Duplicate Nodes in a Linked List
Sample Input

6
1
2
2
3
3
4
Sample Output

1 2 3 4 

*/

#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public: 
			Node* removeDuplicates(Node *head)
          {
              Node *present;
              Node *future;
              present = head;                 
              while(present->next!=NULL){                    
                  future = present->next;                  
                  if(future->data == present->data){    // Checking for duplicate                   
                      present->next = future->next; 
                  }
                  else{
                      present = present->next;
                  }
                  
              }
              return head;
            
            
            
          }
		  Node* insert(Node *head,int data)
          {
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head)
          {
                  Node *start=head;
                    while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
	