/*Output Format

Print the parsed integer value of , or Bad String if  cannot be converted to an integer.

Sample Input 0

3
Sample Output 0

3
Sample Input 1

za
Sample Output 1

Bad String */
using namespace std;


int main(){
    string S;
    cin >> S;
    try{
        int out = stoi(S);
        cout << out << endl;
    }
    catch(invalid_argument){
        cout << "Bad String" << endl;
    }        
    return 0;
}