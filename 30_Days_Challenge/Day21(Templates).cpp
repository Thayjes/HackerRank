/*Write a single generic function named printArray; this function must take an array of generic 
elements as a parameter (the exception to this is C++, which takes a vector).
printArray function should print each element of its generic array parameter on a new line. */

template <class T>
void printArray(vector<T> vec){
    for(int i = 0; i< vec.size(); i++){
        cout << vec[i] << endl;
    }    
}


