#include<iostream>
using namespace std;
class stack
{
	int *pStack ;
	int size ;
	int top ;
	
	public : 
	stack(int);
	bool isFull();
	bool isEmpty();
	bool push(int);
	bool pop(int &);
	void display();
	~stack();
	
	
};
