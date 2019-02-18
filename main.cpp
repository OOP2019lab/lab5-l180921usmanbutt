#include "bank.h"

bankaccount::bankaccount()
{
	id=0;
	name=" ";
	transactions= new int [10];
	no_of_trans=0;
	bal_limit=200000;
	bal=0;
	max_trans=10;
}


bankaccount::bankaccount(int i,string s)
{
	id=i;
	name=s;
	transactions= new int [10];
	no_of_trans=0;
	bal_limit=200000;
	bal=0;
	max_trans=10;
}

void bankaccount::setamount(int a)
{
	bal =a;
}

void bankaccount::print ()
{
	cout<<"account no.is:"<<id<<endl;
	cout<<"name of acc. holderis:"<<name<<endl;
	cout<<"num. of trans:"<<no_of_trans<<endl;
	cout<<"current balance is:"<<bal<<endl;
	cout<<"record of transactions: {";
	for(int i=0;i<no_of_trans;i++)
	{
		cout<<transactions[i]<<" ";
	}
	cout<<"}"<<endl;
}

void bankaccount::withdraw(int a)
{
	increasetrancapacity();
	if (a>bal){
		cout<<"transaction unsuccessful:insufficient ammount\n";
	}
	else{
		bal= bal-a;
	transactions[no_of_trans]=-a;
		no_of_trans++;
		
	}
}

void bankaccount::deposit(int a)
{

	increasetrancapacity();
	if(a+bal>bal_limit){
	cout<<"amount is greater than limit"<<endl;
	}
	else{
	bal=bal+a;
	transactions[no_of_trans]=a;
	no_of_trans++;
	}

}

void bankaccount::increasetrancapacity()
{
	if(no_of_trans>=max_trans-1){
	int*temp=new int [max_trans*2];

		for(int i=0;i<no_of_trans;i++){
			temp[i]=transactions[i];
		}
		
		transactions=new int [max_trans*2];
		for(int i=0;i<no_of_trans;i++){
			transactions[i]=temp[i];
		}
		
		delete [] temp;
	}


}

bankaccount::~bankaccount()
{
		delete [] transactions;
}