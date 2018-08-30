#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
		int op,num[5],num2[5],longi=0;
		char ok[5];
		
		cout<<"Digite el numero: ";
		cin>>ok;
		longi=strlen(ok);
		cout<<"Es el numero:\n";
		for(int i=0;i<longi;i++){
				switch(ok[i]){
				case '1':
						num[i]=1;
						num2[i]=1.0;
						break;
				case '2':	
						num[i]=2;
						num2[i]=2.0;
						break;
				case '3':
						num[i]=3;
						num2[i]=3.0;
						break;
				case '4':
						num[i]=4;
						num2[i]=4.0;
						break;
				case '5':
						num[i]=5;
						num2[i]=5.0;
						break;
				case '6':
						num[i]=6;
						num2[i]=6.0;
						break;
				case '7':
						num[i]=7;
						num2[i]=7.0;
						break;
				case '8':
						num[i]=8;
						num2[i]=8.0;
						break;
				case '9':
						num[i]=9;
						num2[i]=9.0;
						break;
				case '0':
						num[i]=0;
						num2[i]=0.0;
						break;
				default:
						break;
			}
			switch(num[i]){
			case 0: cout<<" cero"; break;
			case 1: cout<<" uno"; break;
			case 2: cout<<" dos"; break;
			case 3: cout<<" tres"; break;
			case 4: cout<<" cuatro"; break;
			case 5: cout<<" cinco"; break;
			case 6: cout<<" seis"; break;
			case 7: cout<<" siete"; break;
			case 8: cout<<" ocho"; break;
			case 9: cout<<" nueve"; break;
			default:break;
		}
		}
		cout<<"\n\n";
		system("pause");
		return 0;
}

