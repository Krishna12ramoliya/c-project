#include<iostream>
#include<string.h>
using namespace std;

class bankaccount
{
	private:
		int accnumber;
		int balance;
		char ownername[50];
		
		public:
		void bankdisplay(int a,int b,string c)
		{
		     a=accnumber;
		     b=balance;
		     c=ownername;
		}
		
		void  credit(int amount)
		{
			if (amount > 0)
			{
				balance+=amount;
				cout<<"credit:"<<amount<<endl;
				}else{
					cout<<"invalid amount. cannot credit"<<endl;
				}
			}
			
	 void debit (int amount)
	 {
	 	if (amount>0 && amount <= balance ){
	 		balance-=amount;
	 		cout<<"debit:"<<amount<<endl;
		 }else{
		 	cout<<"invalied amount or insuficient balance."<<endl;
		 }
	 }
	 
	 void display ()  
	 {
	 	cout<<endl<<"account holder:"<<ownername<<endl;
	 	cout<<endl<<"account number:"<<accnumber<<endl;
	 	cout<<endl<<"account balance:"<<balance<<endl;
	 	
	 }
};
	
	
	int main()
	{
		bankaccount account("parikh mehta", 456529462, 50000);
		
		
		account.display();
		
		account.credit(5000);
		account.debit(10000);
		account.debit(6000);
		
		account.display();	
			
		}	
