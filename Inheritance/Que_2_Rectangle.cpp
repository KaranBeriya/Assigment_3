#include<iostream>
using namespace std;

class Rectangle
{	
		public :
			
		int lenth;
			
			void get_lenth()
			{
				cout<<"\n\n\t Enter Lenth Value : ";
				cin>>lenth;
			}
			
			
};

class Rectangle1 : public Rectangle
{
	int wigth;
	
	public :
		
		void get_wigth()
		{
			cout<<"\n\n\t Enter Wigth Value : ";
			cin>>wigth;
		}
		
		void display()
		{
			cout<<"\n\n\t Rectangle : "<<lenth*wigth;
		}
		
};
main()
{
	Rectangle1 R;
	
	R.get_lenth();
	R.get_wigth();
	R.display();
}
