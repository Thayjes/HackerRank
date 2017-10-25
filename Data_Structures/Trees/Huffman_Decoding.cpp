/* TREE HUFFMAN DECODING
Sample Input

         {ϕ,5}
      0 /     \ 1
     {ϕ,2}   {A,3}
    0/   \1
{B,1}  {C,1}  

S="1001011"
Sample Output

ABACA
Explanation

S="1001011"
Processing the string from left to right.
S[0]='1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
We move back to the root.

S[1]='0' : we move to the left child. 
S[2]='0' : we move to the left child. We encounter a leaf node with value 'B'. We add 'B' to the decoded string.
We move back to the root.

S[3] = '1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
We move back to the root.

S[4]='0' : we move to the left child. 
S[5]='1' : we move to the right child. We encounter a leaf node with value C'. We add 'C' to the decoded string.
We move back to the root.

 S[6] = '1' : we move to the right child of the root. We encounter a leaf node with value 'A'. We add 'A' to the decoded string.
We move back to the root.

Decoded String = "ABACA"

*/
	

/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/
#include<string>
#include<iostream>

void decode_huff(node * root,string s)
{
    
    string out = "";
    node * temp = root;
    //loop through the input string
    for(int i = 0; i < s.length(); i++){        
        char c = s[i];    
        // If the character is '0' go to the left node, if it is '1' go to the right node.
        if(c == '0'){
            temp = temp->left;
        }
        else if (c == '1'){
            temp = temp->right;
        }
        // Now check the data of the new node.
        // If we encountered an internal node, dont reset temp, but continue the loop.
        if((int)temp->data == 0){ 
            continue;
        } 
        // If it is a letter node, add it to the string and reset temp to root.
        else{
            out+=temp->data;
            temp = root;
        }                                  
    }
    // Print the decoded string to console
    cout << out;
}
