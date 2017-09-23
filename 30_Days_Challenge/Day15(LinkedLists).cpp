/*Sample Input

The following input is handled for you by the locked code in the editor: 
The first line contains T, the number of test cases. 
The T subsequent lines of test cases each contain an integer to be inserted at the list's tail.

4
2
3
4
1
Sample Output

The locked code in your editor prints the ordered data values for each element in your list as a single line of space-separated integers:

2 3 4 1 */
include <iostream>
#include <cstddef>
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
	Node* insert(Node *head,int data)
      {     
                    
          Node* newhead = new Node(data); // Create a pointer which points to the latest data node instance, new.
          // So newhead->next is NULL and newhead->data is data.
          
          if(head == NULL){              
              head = newhead; // Assign the head pointer to point to the first node                    
          }                     
          else{       
               Node* temp; //Create a temporary node pointer
               temp = head; // Initialize to the head node pointer
               while(temp->next != NULL){                            
                            temp = temp->next;
              }
               temp->next = newhead;               
          }         
          return head; //first attempt */
          //Another more elegant way to do it, borrowed from discussion forums.
          /*Node** pp = &head; //Create a pointer which points to the head pointer.
          while(*pp){       // This covers the head = Null check as well
              pp = &((*pp)->next); //Update the address of the ptr to ptr, so it points to the pointer of the next
              // node!
          }
          *pp = new Node(data); // Finally update the value at that pointer to the new data.
          return head;*/
          
          
         // //Complete this method
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
	mylist.display(head);
		
}