/*Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    int number = n;
    for(int k = 0; k < n; k++){
        for(int i =0; i<number-1; i++){
            cout << " ";
        }
        for(int j = n; j > number-1; j--){
            cout << "#";
        }
        cout << endl;
        number-=1;
    }
    return 0;
    
    
    
}