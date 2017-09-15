Input Format

Most of the input is handled for you by the locked code in the editor.

In the void Student::input() function, you must read  scores from stdin and save them to your instance variable.

Constraints 
 

Output Format

In the int Student::calculateTotalScore() function, you must return the student's total grade (the sum of the values in ).

The locked code in the editor will determine how many scores are larger than Kristen's and print that number to the console.

Sample Input

The first line contains , the number of students in Kristen's class. The  subsequent lines contain each student's exam grades for this semester.

3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output

1
Explanation

Kristen's grades are on the first line of grades. Only  student scored higher than her.


// Write your Student class here
#include<sstream>
class Student{
    public:
        vector<int> scores;
        void input(){
            int x;
            for(int i =0; i<5; i++){
                cin >> x;
                scores.push_back(x);
            }
        
            /*int s1, s2, s3, s4, s5;
            cin >> s1 >> s2 >> s3 >> s4 >> s5;
            scores.push_back(s1);
            scores.push_back(s2);
            scores.push_back(s3);
            scores.push_back(s4);
            scores.push_back(s5);*/
            
            /*string line;
            // Grab the newline character from the input buffer and discard it
            // this is required when you use getline and cin together.
            cin.ignore();
            // If you want to ignore certain number of characters or new line (whichever first) then use:
            //cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if(getline(cin, line)){                
                istringstream iss(line);                
                int x;
                while(iss >> x){ 
                    cout << x << endl;
                    scores.push_back(x);
                }     
                //cout << scores.size() << endl;
            }*/
        }
        int calculateTotalScore(){
            int sum = 0;
            for(int i=0; i<scores.size(); i++){
                sum+=scores[i];
                //cout << sum << endl;
            }     
            
            return sum;
        }        
};  