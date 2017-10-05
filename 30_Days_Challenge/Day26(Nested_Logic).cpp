/* Nested Logic:
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <sstream>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> actual;
    vector<int> expected;
    string line;
    int x;
    getline(cin, line);
    stringstream is(line);
    while(is >> x){
        //cout << x << endl;
        actual.push_back(x);
    }
    getline(cin, line);
    stringstream is2(line);
    while(is2 >> x){
        //cout << x << endl;
        expected.push_back(x);
    }
    //cout << actual[0] << endl;
    int fine = 0;
    int month_diff = actual[1] - expected[1];
    int day_diff = actual[0] - expected[0];
    int year_diff = actual[2] - expected[2];
    if(year_diff > 0){
        fine += 10000;
    }
    else if((year_diff == 0) & (month_diff > 0)){
        fine += month_diff*500;
    }
    else if((year_diff == 0) & (day_diff > 0)){
        fine+= day_diff*15;
    }
    cout << fine;
    
    return 0;
}
