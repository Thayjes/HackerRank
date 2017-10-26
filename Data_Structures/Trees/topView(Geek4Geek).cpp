/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include<queue>
#include<algorithm>
#include<map>
using namespace std;
void topView(node * root) {
    node * temp = root;
    queue<node*> q;
    int hdist = 1; // This is the horizontal distance
    // Horizontal distance for a node is defined by how many steps left or right it is from the center root node
    // For a left node of x , hdist = hdist(x) - 1
    // For a right node of x, hdist = hdist(x) + 1
    // Create a map with key as the horizontal distance and value as the node data.
    std::map<int, int> mymap;
    std::map<int,int>::iterator it;
    mymap[hdist] = 1;
       
    
    while(temp){   
        // Get the horizontal distance of the current node by selecting the key which has
        // value as the current node data.
        for (it = mymap.begin(); it != mymap.end(); ++it ){
        if (it->second == temp->data)
            hdist = it->first; //it->first returns the key with value = temp->data
        }
        if(temp->left){            
            q.push(temp->left);                        
            if(mymap.count(hdist - 1) <= 0){
                mymap[hdist-1] = temp->left->data;
            }
        }
        if(temp->right){
            //hdist++;            
            q.push(temp->right);
            if(mymap.count(hdist + 1) <=0){
                mymap[hdist+1] = temp->right->data;
            }
        }       
        temp = q.front();
        q.pop();
    }
    for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    std::cout <<  it->second << ' ';
    
    
    
 
  
}
