Design a class named Box whose dimensions are integers and private to the class. The dimensions are labelled: length , breadth , and height .

The default constructor of the class should initialize , , and  to .

The parameterized constructor Box(int length, int breadth, int height) should initialize Box's  and  to length, breadth and height.

The copy constructor BoxBox ) should set  and  to 's  and , respectively.

Apart from the above, the class should have  functions:

int getLength() - Return box's length
int getBreadth() - Return box's breadth
int getHeight() - Return box's height
long long CalculateVolume() - Return the volume of the box
Overload the operator  for the class Box. Box   Box  if:

 < 
 <  and ==
 <  and == and ==
Overload operator  for the class Box(). 
If  is an object of class Box:

 should print ,  and  on a single line separated by spaces.


 
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
class Box{
    private:
        int l, b, h;
    public:
        Box(){
            l = 0;
            b = 0;
            h = 0;
        }
       Box(int length, int breadth, int height){
           l = length;
           b = breadth;
           h = height;
       }
        Box(const Box &B){
            l = B.l;
            b = B.b;
            h = B.h;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            long long volume = l;
            volume*=b;
            volume*=h;
            return volume;
        }
        bool operator<(Box& box){
            if((l < box.l) || ((b < box.b) && (l == box.l)) || ((h < box.h) && (b == box.b) && (l == box.l))){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        
};
ostream& operator<<(ostream& out, Box& B){
            return out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
        }
		
USAGE
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}