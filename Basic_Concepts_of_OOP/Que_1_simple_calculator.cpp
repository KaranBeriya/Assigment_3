#include<iostream>

using namespace std;

main()

{
	int n1, n2;
	
	cout<<"\n\n\t Enter n1 Number :";
	cin>>n1;
	
	cout<<"\n\n\t Enter n2 Number :";
	cin>>n2;
	
	cout<<"\n\n\t-----------------------------------";
	
	cout<<"\n\n\t Press 1 Addition  ";
	cout<<"\n\n\t Press 2 Subscription  ";
	cout<<"\n\n\t Press 3 Multiphication ";
	cout<<"\n\n\t Press 4 Division  ";
	cout<<"\n\n\t Press 0 Exit "; 
	
	cout<<"\n\n\t------------------------------------";
	
	int choice;
	
	cout<<"\n\n\t Enter you Choice of Operation : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1 :cout<<"\n\n\t Addition "<<n1+n2;
				break;
				
		case 2 :cout<<"\n\n\t Subscription "<<n1-n2;
				break;
		
		case 3 :cout<<"\n\n\t Multiphocatin "<<n1*n2;
				break;
				
		case 4 :cout<<"\n\n\t Divison "<<n1/n2;
				break;
			
		case 5 : exit(0);
				
		default :cout<<"\n\n\t Invaild Choice....";
				break;
										
			
	} 
	
}
