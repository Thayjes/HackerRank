/*Input Format

You do not need to read anything from stdin. The locked stub code in your editor reads a single line containing string . It then calls the methods specified above to pass each character to your instance variables.

Constraints

 is composed of lowercase English letters.
Output Format

You are not responsible for printing any output to stdout. 
If your code is correctly written and  is a palindrome, the locked stub code will print ; otherwise, it will print 

Sample Input

racecar
Sample Output

The word, racecar, is a palindrome. */

#include <iostream>
#include<stack>
#include<queue>
using namespace std;

class Solution {
    //Write your code here            
    public:
        queue<char> myqueue;
        stack<char> mystack;
        void pushCharacter(char ch){
            mystack.push(ch);            
        }
        void enqueueCharacter(char ch){
           myqueue.push(ch);          
        }
        char popCharacter(){
            char temp = mystack.top();
            mystack.pop();
            return temp;
        }
    
        char dequeueCharacter(){
            char temp = myqueue.front();
            myqueue.pop();
            return temp;
        }
     

};