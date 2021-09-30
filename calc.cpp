#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

	double n,m,res;
	int ch;

	cout << "Select one of the operations" << endl;
	cout << "1. Addition \t\t 2. Subtraction \t\t 3. Multiplication \t\t 4. Division" << endl;
	cin >> ch;

	cout << "Enter the two numbers" << endl;
	cout << "num1: ";
	cin >> n;
	cout << "num2: ";
	cin >> m;

	switch(ch)
	{
		case 1:
			res=n+m;
			cout << "Result "<< res << endl;
		  	break;

		case 2:
			res=n-m;
			cout << "Result "<< res << endl;
		  	break;

		case 3:
			res=n*m;
			cout << "Result "<< res << endl;
		  	break;

		case 4:
			res=n/m;
			cout << "Result "<< res << endl;
		  	break;

		default:
			cout << "Error!! input" << endl;
	}
	  
	 
	system("pause");
	return 0;
}
