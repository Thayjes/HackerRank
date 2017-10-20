/* Using Regex /*



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
#include<regex>
#include<set>
using namespace std;


int main(){
    int N;
    cin >> N;
    regex b (".+@gmail\\.com");
    multiset<string> names;
    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if (regex_match(emailID, b)){
            names.insert(firstName);
        }
        
                
    }
    for (std::multiset<string>:: iterator it = names.begin(); it != names.end(); ++it){
            std::cout << *it << endl;;
        }
    return 0;
}
