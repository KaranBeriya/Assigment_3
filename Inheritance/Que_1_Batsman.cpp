#include<iostream>
using namespace std;

class Batsman
{
	int total_run,total_match;
	string per;
	
	public :
		void get_bat()
		{
			cout<<"\n\n\t Enter Batsman Total Match : ";
			cin>>total_match;
			cout<<"\n\n\t Enter Batsman Total Run : ";
			cin>>total_run;
			cout<<"\n\n\t Enter Batsman Performance : ";
			cin>>per;
	
		};
		
			void put_bat()
		{
			cout<<"\n\n\t Enter Batsman Total Match : "<<total_match;
			cout<<"\n\n\t Enter Batsman Total Run : "<<total_run;
			cout<<"\n\n\t Batsman Performance : "<<per;
			cout<<"\n\n\t Batsman Average : "<<total_run/total_match;
		}
};
main()
{
	Batsman B;
	
	B.get_bat();
	B.put_bat();
	
}
