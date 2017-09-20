Create a list, seqList, of  N empty sequences, where each sequence is indexed from 0 to N-1. The elements within each of the N sequences also use 0-indexing.
Create an integer, lastAnswer, and initialize it to 0.
The  types of queries that can be performed on your list of sequences (seqList) are described below:
Query: 1 x y
Find the sequence, seq, at index ((x XOR lastAnswer) % N) in .
Append integer  to sequence .
Query: 2 x y
Find the sequence, seq, at index ((x XOR lastAnswer) % N) in .
Find the value of element  in  (where  is the size of ) and assign it to .
Print the new value of lastAnswer on a new line
Task 


Note: the bitwise XOR operation, which corresponds to the ^ operator in most languages. Learn more about it on Wikipedia.

Input Format

The first line contains two space-separated integers,  (the number of sequences) and  (the number of queries), respectively. 
Each of the  subsequent lines contains a query in the format defined above.

Constraints

It is guaranteed that query type  will never query an empty sequence or index.
Output Format

For each type  query, print the updated value of  on a new line.

Sample Input

2 5
1 0 5
1 1 7
1 0 3
2 1 0
2 1 1
Sample Output

7
3

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int lastAnswer = 0;
    int N;
    cin >> N; // Size of each vector
    vector <vector<int>> seqList(N); // Initialize the vector of vectors
    int seqNumber, elementNumber; // Initialize variables for sequence number and element number
    int Q; // Number of queries
    cin >> Q;
    int Qtype; // Query Type
    int x,y; // Integers to determine sequence number and number to append to sequence
    for(int i = 0; i < Q; i++){
        cin >> Qtype; // Read in query type
        cin >> x >> y; // Read in integers
        if(Qtype == 1){
            seqNumber = ( (x^lastAnswer) % N); // Find sequence number using XOR operator
            seqList[seqNumber].push_back(y); // Append the integer to that sequence
        }
        else{
            seqNumber = ( (x^lastAnswer) % N);
            elementNumber = (y % seqList[seqNumber].size()); 
            // If query type 2, find which element to assign to lastAnswer
            lastAnswer = seqList[seqNumber][elementNumber]; // Assign that number to lastAnswer
            cout << lastAnswer << endl; // Print lastAnswer on new line
        }
    }
    return 0;
}