#include<iostream>

using namespace std;

class Person
{
	string name;
	int age;
	string country;
	
	public :
		
		void get_inf()
		{
			cout<<"\n\n\t Enter Name : ";
			cin>>name;
			
			cout<<"\n\n\t Enter Age : ";
			cin>>age;
			
			cout<<"\n\n\t Enter Country : ";
			cin>>country;
		}
		
		void put_inf()
		{
			cout<<"\n\n\t Name : "<<name;
			
			cout<<"\n\n\t Age : "<<age;
			
			cout<<"\n\n\t Country : "<<country;	
		}
};

main()
{
	Person P;
	
	P.get_inf();
	P.put_inf();
}
