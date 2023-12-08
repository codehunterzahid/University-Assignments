#include<iostream>
using namespace std;

//int main(){
//	int a,b,c;
//	a=12;
//	b=19;
//	c=28;
//	
//	
//	if(a < b && a < c )
//	{
//		cout<<"A is Smaller";
//	}
//	else
//	{
//		if(b < a && b < c)
//		{
//			cout<<"B is Smaller";
//		}
//		else
//		{
//			cout<<"C is Smaller";
//		}
//	}
//	
//}


int main(){
	int a,b;
	
	a = 23;
	
	cout << "Enter any Random Number = ";
	cin >> b;
	
	while (a != b){
		cout << "Try Again : ";
		cin >> b;
	}
	
	cout << "You won";
}







