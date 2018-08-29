#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	int op;
	
	cout<<"Digite el numero: ";
	cin>>op;
	
	switch(op){
		case 1: cout<<"Es el numero 1"; break;
		case 2: cout<<"Es el numero 2"; break;
		case 3: cout<<"Es el numero 3"; break;
		case 4: cout<<"Es el numero 4"; break;
		case 5: cout<<"Es el numero 5"; break;
		case 6: cout<<"Es el numero 6"; break;
		case 7: cout<<"Es el numero 7"; break;
		case 8: cout<<"Es el numero 8"; break;
		case 9: cout<<"Es el numero 9"; break;
		default: cout<<"No es un numero"; break;
	}
	
	return 0;
}

