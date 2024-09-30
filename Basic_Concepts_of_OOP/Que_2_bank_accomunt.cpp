#include<iostream>

using namespace std;

class Bank 
{
	string holder;
	int acc_no;
	string acc_type;
	int balance;
	
	public:
		
		void get_depositor()
		{
		
			cout<<"\n\n\t Enter Depositor Name : ";
			cin>>holder;

			cout<<"\n\n\t Enter Account Number : ";
			cin>>acc_no;
			
			cout<<"\n\n\t Enter Account Type : ";
			cin>>acc_type;
			
			cout<<"\n\n\t Enter balance amount : ";
			cin>>balance;
			
	    }
	    
	    void display()
	    
	    {
	    	cout<<"\n\n\t Depositor Name : "<<holder;
	    	cout<<"\n\n\t Account Number : "<<acc_no;
	    	cout<<"\n\n\t Account Type : "<<acc_type;
	    	cout<<"\n\n\t Amount : "<<balance;
		}
			void deposit()
			{
				int dep;
				
				cout<<"\n\n\n\t Enter an amount to deposite : ";
				cin>>dep;
				
				balance=balance+dep;
			}
				void withdraw()
			{
				int amt;
				
				cout<<"\n\n\n\t Enter an amount for withdrawal : ";
				cin>>amt;
				
				if(balance>amt)
					balance=balance-amt;
					
				else
					cout<<"\n\n\n\t Not Sufficient balance : ";
			}

	
};

main()
{
		Bank acc;
	
	acc.get_depositor();
	acc.display();
	acc.deposit();
	acc.withdraw();

}

