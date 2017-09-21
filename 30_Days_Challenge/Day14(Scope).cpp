#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	
	Difference(vector<int> elements_){
        elements = elements_;
    }
    int computeDifference(){
        int current_diff = 0;        
        maximumDifference = 0;
        for(int j = 0; j < elements.size(); j++){
            for(int i=j; i < elements.size(); i++){
                current_diff = abs(elements[j] - elements[i]);
                if(current_diff > maximumDifference){
                maximumDifference = current_diff;
            }
            }           
            
            
        }
        return 0;        
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}