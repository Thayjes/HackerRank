/*Sample Input 0

3
1 2 3

Sample Output 0

Array is sorted in 0 swaps.
First Element: 1
Last Element: 3

Sample Input 1

3
3 2 1

Sample Output 1

Array is sorted in 3 swaps.
First Element: 1
Last Element: 3
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Write Your Code Here
    int total_num_swaps = 0;
    for (int i = 0; i < n; i++){
        int num_swaps_current = 0;
        for(int j = 0; j < n-1; j++){
            if(a[j] > a[j+1]){
                iter_swap(a.begin() + j, a.begin() + (j+1));
                num_swaps_current++;
                total_num_swaps++;
            }
        }
        if(num_swaps_current == 0){
            break;
        }
    }
    cout << "Array is sorted in " << total_num_swaps << " swaps." << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;
    return 0;
}