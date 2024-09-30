#include<iostream>
using namespace std;

class Rectangle
{
	int length, width;
	
	public:
			
			void get_rectangle()
			{
				cout<<"\n\n\t Enter Length : ";
				cin>>length;
				
				cout<<"\n\n\t Enter Width : ";
				cin>>width;	
			}
			
			void put_rectangle()
			{
				cout<<"\n\n\t Rectangle Area : "<<length*width;
				
				cout<<"\n\n\t Perimeter Area : "<<(length*2)+(width*2);
			}
};
main()
{
	Rectangle R;
	
	R.get_rectangle();
	R.put_rectangle();
}


