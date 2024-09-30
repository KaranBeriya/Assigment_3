#include<iostream>
using namespace std;

class Triangle
{
	int a, b, c;
	
	public :
			void get_tri()
			{
				cout<<"\n\n\t Enter A Value : ";
				cin>>a;
				cout<<"\n\n\t Enter B Value : ";
				cin>>b;
				cout<<"\n\n\t Enter C Value : ";
				cin>>c;
			}
			
			void put_tri()
			{
				
				if (a==b && b==c && c==a)
					{
						cout<<"\n\n\t Equilateral Triangle...";
					}
				
				else if (a==b && b==c) 
					{
						cout<<"\n\n\t Isosceles Triangle...";
					}
				else 
					{
						cout<<"\n\n\t Scalene Triangle...";
					}
				
			}
};
main()
{
	Triangle T;
	
	T.get_tri();
	T.put_tri();
}
