/* Using interface to calculate sum of divisors */
include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator :public AdvancedArithmetic{
    public:
        int divisorSum(int n){
            int sum = 0;
            for(int i = 1; i <= sqrt(n); i++){ //Instead of going through all the number stop before half
                //cout << i << endl;
                if(n%i == 0){ // If the number divides it, add it to the sum
                    sum += i;                    
                    if( i != (n/i)){ 
                        /*divisors will occur in pairs, so we can add the second half of the pair
                        but we will do it only when the pair is not equal.*/                        
                        sum += n/i;
                    }
                }                
            }
            return sum;
        }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}