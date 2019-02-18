#include <iostream>
#include <string>
using namespace std;


class bankaccount
{
private:
	string name;
	int id;
	float bal;

public:
	int max_trans;
	float bal_limit;
	int *transactions;
	int no_of_trans;
	void setamount(int a);
	bankaccount();
	bankaccount(int id, string n);
	void print();
	void withdraw(int a);
	void deposit(int a);
	void increasetrancapacity();
	~bankaccount();
};