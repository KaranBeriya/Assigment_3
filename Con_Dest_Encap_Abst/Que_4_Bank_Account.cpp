#include<iostream>
using namespace std;

class Bank
{
	string acc_no;
	int balance,with,dep;
	
	public :
		
		void get_account()
		{
			cout<<"\n\n\t Enter Account Number : ";
			cin>>acc_no;
			
			cout<<"\n\n\t Enter Account Balance : ";
			cin>>balance;
			
			cout<<"\n\n\t Account Number : "<<acc_no;
			cout<<"\n\n\t Your Balance is : "<<balance;
		}
		
		void get_deposit()
		
		
		{
			cout<<"\n\n\t Enter Deposit Amount : ";
			cin>>dep;
			
			cout<<"\n\n\t Total Amount : "<<balance+dep;
			balance=balance+dep;
		}
		
		void get_withdraw()
		{
			cout<<"\n\n\t Enter Withdraw Amount : ";
			cin>>with;
				
			if (balance>with)
			{
			
				cout<<"\n\n\t Process Successful......";
				cout<<"\n\n\t Total Amount : "<<balance-with;
				balance=balance-with;
			}
			else 
			
				cout<<"\n\n\t Balance not Enough.....";
		}
		
};

main()
{
	Bank B;
	
	B.get_account();
	B.get_deposit();
	B.get_withdraw();
}
