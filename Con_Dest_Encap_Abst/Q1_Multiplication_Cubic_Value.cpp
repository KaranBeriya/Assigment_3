#include<iostream>
using namespace std;

class Mul
{
	int x, y;
	
	public :
		
		void get_mul()
		{
			cout<<"\n\n\t Enter X value : ";
			cin>>x;
			
			cout<<"\n\n\t Enter Y value : ";
			cin>>y;
		}
		
		void put_mul()
		{
			cout<<"\n\n\t Multiplication values : "<<x*y;
			
			cout<<"\n\n\t Cubic Values : "<<x*x*x;
		}
};
main()
{
	Mul M;
	
	M.get_mul();
	M.put_mul();
}
