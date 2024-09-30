#include<iostream>
using namespace std;

class Student
{
	
	 public :
	 	
	 	string s_name;
		int s_id;
		
			void get_name()
			{
				cout<<"\n\n\t Enter Student Name : ";
				cin>>s_name;
				cout<<"\n\n\t Enter Student Id : ";
				cin>>s_id;
			}
			void put_name()
			{
				cout<<"\n\n\t Student Name : "<<s_name;
				cout<<"\n\n\t Student Id : "<<s_id;
			}
};
class Student1 
{
	
	
	public :
			int sub[5];
			int total;
			float per; 
		
			void get_subject()
			{	
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Enter Student Sub Marks ["<<i+1<<"] : ";
					cin>>sub[i];
					total=total+sub[i];
				}
					
			}
			
			void print()
			{
				for(int i=0;i<5;i++)
				cout<<"\n\n\t Student Sub Marks ["<<i+1<<"] : "<<sub[i];
				cout<<"\n\n\t Student Total Marks : "<<total;
				per=total/5;
				cout<<"\n\n\t Student Percentage : "<<per;
			}
			
		
			
		
};

class Student2 : public Student, public Student1
{
	int gread;
	
	public :
		void get_gread()
		{
			if(per>=80)
			{
				cout<<"\n\n\t Studet Gread : A+";
			}
			else if(per>=70)
			{
				cout<<"\n\n\t Student Gread : A";
			}
			else if(per>=60)
			{
				cout<<"\n\n\t Student Gread : B";
			}
			else if(per>=50)
			{
				cout<<"\n\n\t Student Gread : C";
			}
			else 
			{
				cout<<"\n\n\t Fail...!!";
			}
		}
};
main()
{
	Student2 S;
	
	S.get_name();
	S.put_name();
	S.get_subject();
	S.print();
	S.get_gread();
}


