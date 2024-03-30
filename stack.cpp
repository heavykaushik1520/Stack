#include"stack.h"
stack :: stack(int s)
{
	size = s;
	pStack = new int[size];
	top = -1 ;
}
/////////////////////////////
bool stack :: isFull()
{
	if(top == size-1)
	{
		return true ;
	}
	else
	{
		return false;
	}
}
////////////////////////////
bool stack :: isEmpty()
{
	if(top == -1)
	{
		return true ;
	}
	else
	{
		return false ;
	}
}
////////////////////////////
bool stack :: push(int data)
{
	if(isFull())
	{
		return false ;
	}
	else
	{
		pStack[++top] = data ;
		return true;
	}
	
}
//////////////////////////////////
bool stack :: pop(int &ele)
{
	if(isEmpty())
	{
		return false ;
	}
	else
	{
		ele = pStack[top--];
		return true ;
	}
}
void stack :: display()
{
	if(isEmpty())
	{
		cout << "\nNO ELEMENTS TO DISPLAY......";
	}
	else
	{
		for(int i = 0 ; i <= top ; i++)
		{
			cout << "\t" << pStack[i];
		}
	}
	
}
stack ::~stack()
{
	if(pStack != NULL)
	{
		delete []pStack ;
	}
}
