*/ Write a program to store in n words. And then query q words.
Print the count of each queried word.
Sample Input

4
aba
baba
aba
xzxb
3
aba
xzxb
ab
Sample Output

2
1
0
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    vector<string> words;
    vector<int> counts;
    string x;
    int n,q;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        words.push_back(x);
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> x;
        if(find(words.begin(), words.end(), x) != words.end()){ // If the queried word is in the existing vector
            counts.push_back(count(words.begin(), words.end(), x)); //increase the count for that word 
        }
        else{
            counts.push_back(0); //else put the count as zero 
        }
        
    }
    for(vector<int>::size_type i = 0; i < counts.size(); i++){
        cout << counts[i] << endl;
    }
    return 0;
}