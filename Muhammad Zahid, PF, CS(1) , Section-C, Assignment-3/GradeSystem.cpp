#include <iostream>
using namespace std;

int main(){
//	variable decleration

	int eng,com,isl,phy,chem;
	float totalMarks , obtainMarks, per;
	
//	Taking Marks from User
	cout << "Enter Marks of English = ";
	cin >> eng;
	
	cout << "Enter Marks of Computer = ";
	cin >> com;
	
	cout << "Enter Marks of Islamiat= ";
	cin >> isl;
	
	cout << "Enter Marks of Physics = ";
	cin >> phy;
	
	cout << "Enter Marks of Chemistery = ";
	cin >> chem;
	
//	Taking total marks from user
	cout << "Enter Total Marks = ";
	cin >> totalMarks;
	
//	obtain marks
	obtainMarks = eng + com + isl + phy + chem;
	
	cout << "\nObtain Marks = " << obtainMarks;
	
//	percentage
    per = (obtainMarks/totalMarks) * 100;
    
    cout << "\nPercentage = " << per << "%\n";
    
    
//    Using if else if statement to printing grades according to Percentage


    if(per >= 90 && per <= 100){
    	cout << "\nYour Grade is A+";
	}
	else if(per >= 80 && per <= 90){
    	cout << "\nYour Grade is A";
	}
	else if(per >= 70 && per <= 80){
    	cout << "\nYour Grade is B";
	}
	else if(per >= 60 && per <= 70){
    	cout << "\nYour Grade is C";
	}
	else if(per >= 50 && per <= 60){
    	cout << "\nYour Grade is D";
	}
	else {
		cout << "\nYour Grade is F";
	}
	
}
