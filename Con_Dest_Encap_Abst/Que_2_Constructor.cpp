#include<iostream>
using namespace std;

class Constructor
{
	int a,b ;
	
	public :
		
		void get_constructor()
		{
			cout<<"\n\n\t Enter A Value : ";
			cin>>a;
			
			cout<<"\n\n\t Enter B Value : ";
			cin>>b;
		}
		
		void put_constructor()
		{
			cout<<"\n\n\t Addition : "<<a+b;
			cout<<"\n\n\t Subtraction : "<<a-b;
			cout<<"\n\n\t Multiplication : "<<a*b;
			cout<<"\n\n\t Division : "<<a/b;
		}
};
main()
{
	Constructor C;
	
	C.get_constructor();
	C.put_constructor();
	
}
