#include <iostream>
using namespace std;

int main(){
	int x, y;
	
	x = 15;
	y = 25;
	
	cout << "Before Swaping value x = " <<x << " y = " <<y;
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	cout << "\n \nAfter swaping values x = " << x << " y = " << y << "\n";
}
