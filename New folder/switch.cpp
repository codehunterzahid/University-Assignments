#include <iostream>
using namespace std;

int main(){
	char ch;
	
	cout << "Enter any Character = ";
	cin >> ch;
	
	switch(ch){
		case 'a': case 'A':
			cout << "You Entered Vowel";
		break;
		
		case 'e' : case 'E':
			cout << "You Entered Vowel";
		break;
		case 'i' : case 'I':
			cout << "You Entered Vowel";
		break;
		case 'o' : case 'O':
			cout << "You Entered Vowel";
		break;
		
		case 'u' : case 'U':
			cout << "You Entered Vowel";
		break;
		
		default :
			cout << "You Entered Consosnant";
	}
}
