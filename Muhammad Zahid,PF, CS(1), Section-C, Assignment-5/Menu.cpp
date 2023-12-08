#include <iostream>
using namespace std;

int main(){
	int item, deal, gst, totalBill;
	
	gst = 136;
	
//	menu Heading
	cout << "\t\t\t\t\t MENU" << "\n\t\t\t\t\t------";
	
//	Menu items available
	cout << "\n    Items \t\t\t\t\t\t Price";
		
	cout << "\n\n(1) Coke \t\t\t\t\t\t 180-RS"; 
	cout << "\n\n(1) Biryani \t\t\t\t\t\t 270-RS";
	cout << "\n\n(1) Fries \t\t\t\t\t\t 125-RS";
	cout << "\n\n(1) Cake \t\t\t\t\t\t 597-RS" << endl;
	
//	taking item number from user
	cout << "\nEnter Item Number From Above : ";
	cin >> item;
	
	
	switch (item){
		
//		if want to order coke
		case 1:
			cout << "\nEnter No Of Deals : ";
			cin >> deal;
			
			totalBill = (180 * deal) + gst;
			
			cout << "\nYour Order " << deal << " Coke and Your Total Bill + gst  is = "<< totalBill << " Rupees" << endl;
			
		break;
		
//		if customer need biryani
		case 2:
			cout << "\nEnter No Of Deals : ";
			cin >> deal;
			
			totalBill = (270 * deal) + gst;
			
			cout << "\nYour Order " << deal << " Plate Biryani and Your Total Bill + gst  is = "<< totalBill << " Rupees" << endl;
		break;
		
//		if customer need fries
		case 3:
			cout << "\nEnter No Of Deals : ";
			cin >> deal;
			
			totalBill = (125 * deal) + gst;
			
			cout << "\nYour Order " << deal << " Plate Fries and Your Total Bill + gst  is = "<< totalBill << " Rupees" <<endl;
		break;
		
//		if customer need cakes
		case 4:
			cout << "\nEnter No Of Deals : ";
			cin >> deal;
			
			totalBill = (597 * deal) + gst;
			
			cout << "\nYour Order " << deal << " Cakes and Your Total Bill + gst  is = "<< totalBill << " Rupees" << endl;
		break;
		
//		if desired item is not available
		default:
			cout << "\nYour Desired Item is Sold" << endl;
	}	
	
}
