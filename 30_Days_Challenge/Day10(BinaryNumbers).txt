Input Format

A single integer, .

Constraints

Output Format

Print a single base- integer denoting the maximum number of consecutive 's in the binary representation of .


#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int num_ones;
    vector<int> base2;
    cin >> n;
    int count = 0;
    int maxones = 0;
    while(n >= 1){
        if((n%2) != 0){
            //cout << n << endl;
            count = count + 1;
        }
        else{
            //cout << n << endl;
            if (count > maxones){
                maxones = count;
            }
            count = 0;
        }
        n = n >> 1; // (n = n / 2^1)
        //cout << n << endl;
    }
    if (count > maxones){
        maxones = count;
    }
    cout << maxones;
      
    
    
    return 0;
}