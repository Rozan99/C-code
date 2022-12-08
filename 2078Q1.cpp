#include<iostream>
using namespace std;
class account
{
	public:
	 int balance,accno;
	 static int min_balance;
	 
	 void read()
	 {
	 cout<<"Enter the balance:"<<endl;
	 cin>>balance;
	 cout<<"Enter the acc_no :"<<endl;
	 cin>>accno;	
	 }	
	 void display()
	 {
	 	cout<<"Acoount no is:"<<accno<<endl;
	 	cout<<"Balance is:"<<balance<<endl;
	 }
	 static void readminbalance()
	 {
	 	
	 	cout<<"Enter the min_balance:"<<endl;
	 	cin>>min_balance;
	 	
	 }
	 static void displayminbalance()
	{
		cout<<"the min balance is:"<<min_balance<<endl;
	}
	
};

int account::min_balance=500;

int main()
{
	int i,n=5;
	account a[n];
	
	cout<<"Enter acc detail :"<<endl;

	for(i=0;i<n;i++)
	{
	a[i].readminbalance();
	}
	cout<<"account detail:"<<endl;
	
	for(i=0;i<n;i++)
	{
	
	a[i].displayminbalance();
	a[i].display();
		
	}
	return 0;
}
