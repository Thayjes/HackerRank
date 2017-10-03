/* Code for printing whether numbers are prime or not using sqrt(n)

Sample Input

3
12
5
7
Sample Output

Not prime
Prime
Prime

*/




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin >> T;
    //cout << T  << endl;
    bool prime = 1;
    long int n;
    vector<long int> v(T);
    for(int i = 0; i < T; i++){
        cin >> n;
        v[i] = n;
    }    
    for(int i = 0; i < T; i++){
        int num = sqrt(v[i]);   
        //cout << num << endl;
        prime = 1;
        if(v[i] == 1){
            prime = 0;
        }        
        for(int j = 2; j <= num; j++){
            //cout << v[i] << " "<< j<<endl;
            if(v[i] % j == 0){
                prime = 0;
                break;
            }      
            
        }
        if(prime == 0){
            cout << "Not prime"<<endl;            
        }
        else{
            cout << "Prime" << endl;            
        }
        
    }
    return 0;
    }