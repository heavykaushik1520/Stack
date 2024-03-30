#include"stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	char ch;
	stack st(6);
	while(ch != 5)
	{
		cout << "\n\t\t1 : Push" ;
	    cout << "\n\t\t2 : Pop" ;
	    cout << "\n\t\t3 : Display" ;
	    cout << "\n\t\t4 : Peak" ;
	    cout << "\n\t\t5 : Exit" ;
	    cout << "\nEnter choice :" ;
	    cin >> ch ;
	    switch(ch)
	    {
	    	case '1':
	    		{
	    			int ele;
	    			cout <<"\nEnter element :";
	    			cin >> ele ;
	    			if(st.push(ele))
	    			{
	    				cout << "\nInsertion Successful";
					}
					else
					{
						cout << "\nInsertion Failed...";
					}
				}
	    		break;
	    	case '2':
	    		{
	    			int x;
	    			if(st.pop(x))
	    			{
	    				cout << x << " is popped...";
					}
					else
					{
						cout << "\nOperation failed....";
					}
	    			
				}
	    		break;
	    	case '3':
	    		{
	    			st.display();
				}
	    		break;
	    	case '4':
	    		break;
	    	case '5':
	    		{
	    			cout << "\nExited..." ;
				}
	    		break;
	    	default:
	    		cout <<"\nInvalid Choice";
	    	
		  
	    }
	}
	
	return 0;
}
