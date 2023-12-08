#include <iostream>
using namespace std;

int main(){
	char operation;
	double num1, num2;
	double result;
	
	cout << "\t\t\t\t\tWelcome to My Calculator" << "\n\t\t\t\t\t------------------------" << endl;
	
	
//	enter any operator +,-,*,/
	cout << "\nEnter any operator (+,-,/,*) = ";
	cin >> operation;
	
	
	
switch (operation){
	case '+':
			
			
//		enter first number
		cout << "Enter First Number = ";
		cin >> num1;
	
//		enter second number
		cout << "Enter Second Number = ";
		cin >> num2;
		
		
		result = num1 + num2;
		
		cout << "Sum of " << num1 << " & " << num2 << " = " << result;
		
	break;
		
	case '-':
			
			
//		enter first number
		cout << "Enter First Number = ";
		cin >> num1;
	
//		enter second number
		cout << "Enter Second Number = ";
		cin >> num2;
		
		result = num1 - num2;
		
		cout << "Difference of " << num1 << " & " << num2 << " = " << result;
		
	break;
		
	case '*':
			
			
//		enter first number
		cout << "Enter First Number = ";
		cin >> num1;
	
//		enter second number
	    cout << "Enter Second Number = ";
		cin >> num2;
		
		result = num1 * num2;
		
		cout << "Product of " << num1 << " & " << num2 << " = " << result;
		
	break;
		
	case '/':
			
			
//	    enter first number
	    cout << "Enter First Number = ";
	    cin >> num1;
	
//	    enter second number
	    cout << "Enter Second Number = ";
	    cin >> num2;
		
		result = num1 / num2;
		
		cout << "Sum of " << num1 << " & " << num2 << " = " << result;
		
	break;
		
	default: 
		
		cout << "You Entered a Invalid Number";
	}
	
}
