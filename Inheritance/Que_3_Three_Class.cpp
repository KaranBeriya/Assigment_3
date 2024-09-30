#include<iostream>
using namespace std;

class Person
{
	
	public : 
			string name;
			int age;
		
			void get_person()
			{
				cout<<"\n\n\t Enter Person Name :  ";
				cin>>name;
				cout<<"\n\n\t Enter Person Age : ";
				cin>>age;
			}
			
};

class Student
{	
	public :
			int per;
			
			void get_per()
			{
				cout<<"\n\n\t Enter Student Percentage : ";
				cin>>per;
			}

};
class Teacher : public Person, public Student  
{
	int salary;
	
	public :
		
			void get_salary()
			{
				cout<<"\n\n\t Enter Teacher Salary : ";
				cin>>salary;
			}
			
			void print()
			{
				cout<<"\n\n\t Person Name : "<<name;
				cout<<"\n\n\t Person Age : "<<age;
				cout<<"\n\n\t Student Percentage : "<<per;
				cout<<"\n\n\t Teacher Salary : "<<salary;
			}
};
main()
{
	Teacher T;
	
	T.get_person();
	T.get_per();
	T.get_salary();
	T.print();
	
	
}
