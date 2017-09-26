/* Program to Print the min and max sum of 4 of the 5 integers
Sample Input

1 2 3 4 5
Sample Output

10 14
*/

#include <bits/stdc++.h>
#include<stdint.h>
#include<numeric>

using namespace std;

int main() {
    vector<long long int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    unsigned long long int max_sum;
    unsigned long long int min_sum; 
    unsigned long long int current_sum = 0;;
    min_sum = accumulate(arr.begin(), arr.end(), 0);
    max_sum = 0;
    for(int i = 0; i < 5; i++){
        vector<long long int> arr_sum(5);
        arr_sum = arr;
        arr_sum.erase(arr_sum.begin()+i);
        current_sum = 0;
        for(int j = 0; j < 4; j++){
            current_sum+=arr_sum[j];
        }
        if(current_sum > max_sum){
            max_sum = current_sum;
        }
        if(current_sum < min_sum){
            min_sum = current_sum;
        }
    }
    cout << min_sum << " " << max_sum;
    return 0;
}