#include<iostream>
using namespace std;

class Car
{
	string company;
	string model;
	int year;
	
	public :
		
		void get_car()
		{
			company="Maruti";
			model="Swift";
			year=2024;
		}
		
		void put_car()
		{
			cout<<"\n\n\t Car Company Name : "<<company;
			cout<<"\n\n\t Car Model Name : "<<model;
			cout<<"\n\n\t Car Year : "<<year;
		}
};
main()
{
	Car C;
	
	C.get_car();
	C.put_car();
}
