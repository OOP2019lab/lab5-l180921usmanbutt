#include "bank.h"


void main()
{
	
	bankaccount myaccount(549002,"JOHN DOE");
	myaccount.setamount(5000);
	myaccount.print();
	myaccount.withdraw(2000);
	myaccount.print();
	myaccount.deposit(25000000);
//myaccount.print();
	myaccount.deposit(2500);
	myaccount.print();
	myaccount.withdraw(200);
	myaccount.print();
	myaccount.deposit(25000);
	myaccount.print();
	system("pause");

}