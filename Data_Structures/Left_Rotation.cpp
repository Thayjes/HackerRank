/*
Print a single line of n space-separated integers denoting the final state of the array after performing d left rotations.

Sample Input

5 4
1 2 3 4 5
Sample Output

5 1 2 3 4
*/

#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {    
    vector <int> temp(a.size());
    int index;
    int dright;
    dright = a.size() - d;    
    // Going left d times, same as going right (a.size() - d) times
    for(int i =0; i < a.size(); i++){                
        index = (i + dright) % (a.size()); // calculate the shifted index after rotation
        temp[index] = a[i];
    }
    return temp;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}