#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
//Dictionaries and Maps
/*Input Format

The first line contains an integer, , denoting the number of entries in the phone book. 
Each of the  subsequent lines describes an entry in the form of  space-separated values on a single line. The first value is a friend's name, and the second value is an -digit phone number.

After the  lines of phone book entries, there are an unknown number of lines of queries. Each line (query) contains a  to look up, and you must continue reading lines until there is no more input.

Note: Names consist of lowercase English alphabetic letters and are first names only.

Constraints

Output Format

On a new line for each query, print Not found if the name has no corresponding entry in the phone book; otherwise, print the full  and  in the format name=phoneNumber.

Sample Input

3
sam 99912222
tom 11122222
harry 12299933
sam
edward
harry
Sample Output

sam=99912222
Not found
harry=12299933

*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // Initialize the map
    map <string, long int> phoneBook;
    int n;
    long int phone_num;
    string name;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> name;
        cin >> phone_num;
        //cout << name << endl;
        //cout << phone_num << endl;
        phoneBook[name] = phone_num;
    }
    while(cin >> name){
        if(phoneBook.count(name)){
            cout << name << "=" << phoneBook[name] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    
    

    return 0;
}
