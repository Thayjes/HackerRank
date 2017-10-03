/* Array Manipulation

Sample Input

5 3 
1 2 100
2 5 100
3 4 100

Sample Output

200

Explanation
5 is size of list, 3 is number of operations.
1, 2 are the two indices between which to add 100.


After first update list will be 100 100 0 0 0. 
After second update list will be 100 200 100 100 100.
After third update list will be 100 200 200 200 100.
Print out the maximum value of the list.
So the required answer will be 200.
Indexing starts from 1.

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    long int n;
    long int m;
    cin >> n >> m;    
    long int* a1 = new long int[n+1]();
    for(long int a0 = 0; a0 < m; a0++){
        long int a;
        long int b;
        long int k;
        cin >> a >> b >> k;
        a1[a]+=k;
        if((b+1) <= n){
            a1[b+1]-=k;
        }
    }
    long int max = 0;
    long int curr = 0;
    for(long int z = 1; z <= n; z++){        
        curr = curr + a1[z];
        if(max < curr){
            max = curr;
        }
    }
    cout << max;
       
        
        
    return 0;
}
