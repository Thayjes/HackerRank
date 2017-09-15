#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


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
