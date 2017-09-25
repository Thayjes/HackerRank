/*Sample Input

4
3 5
2 4
-1 -2
-1 3
Sample Output

243
16
n and p should be non-negative
n and p should be non-negative
*/

//Write your code here
class Calculator{
    public:
    Calculator(){}
    int power(int n, int p){
        if( (n<0) || (p<0)){
            throw runtime_error("n and p should be non-negative");
        }
        else{
            return pow(n, p);
        }
    }
};