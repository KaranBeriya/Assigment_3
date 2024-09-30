#include<iostream>
using namespace std;

class Circle
{
	int rad;
	float pi=3.14;
	
	public :
			void get_radious()
			{
				cout<<"\n\n\t Enter Area and Circuference Radious Number : ";
				cin>>rad;				
			}
			
			void put_radious()
			{
				cout<<"\n\n\t Area Of Circle : "<<pi*rad*rad;
				
				cout<<"\n\n\t Circuference Of Circle : "<<2*pi*rad;
			}
				
};

main()
{
		
	Circle C;
	
	
	C.get_radious();
	C.put_radious();
}
