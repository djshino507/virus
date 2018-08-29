#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char ok[20],op[20],piv[20],stop[20]=";";
	int num[5],longi=0;
	int a=0,b=0,c=0,d=0,k=0,suma=0,resta=0,multi=0,exp=0,porce=0,X=0,Y=0,Z=1;
	float num2[5],D;
		cout<<"Suma (a+b=c)\nResta (a-b=c)\nMultiplicacion (a*b=c)\nDivision (a/b=c)\n";
	//cin.getline(ok,20,'\n');
	//LIMPIADO DE VECTORES
	for(int X=0;X<=20;X++){
						ok[X]=0;
						piv[X]=0;
	}
	
	//ENTRADA DE DATOS
	cin>>ok;
	longi=strlen(ok);
	
	//CONVERSOR DE CARACTERES A NUMEROS (LEXICO)
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
	
	/*//VERIFICADOR DE NUMEROS
		cout<<"["<<num[i]<<"] ";*/
		//cout<<"ultimo es "<<ok[longi-1]<<"\n";
	}
	
	
	//IMPRESION DE ESTRUCTURA
	if(ok[longi-1]==0){
		cout<<"\n[Error de Syntaxys] - no se puede dividir entre cero";
	}
	else{
		for(int X=0;X<longi;X++){
								cout<<"["<<ok[X]<<"] ";
		}
		cout<<"\nSalida: ";
		for(int X=0;X<longi;X++){
								cout<<ok[X];
		}
	}
	
	//OPERACIONES
	for(int i=0;i<longi;i++){	
		//DIVISION
		 if(ok[i]=='/'){
					if(i==1){
							switch(longi){
								case 3:	D=num2[0]/num2[2];
										cout<<"="<<D;
										break;
								case 4:	D=(num2[0])/(num2[2]*10+num2[3]);
										cout<<"="<<D;
										break;
								case 5:	D=(num2[0])/(num2[2]*100+num2[3]*10+num2[4]);
										cout<<"="<<D;
										break;
								case 6:	D=(num2[0])/(num2[2]*1000+num2[3]*100+num2[4]*10+num2[5]);
										cout<<"="<<D;
										break;
								case 7:	D=(num2[0])/(num2[2]*10000+num2[3]*1000+num2[4]*100+num2[5]*10+num2[6]);
										cout<<"="<<D;
										break;
								case 8:	D=(num2[0])/(num2[2]*100000+num2[3]*10000+num2[4]*1000+num2[5]*100+num2[6]*10+num2[7]);
										cout<<"="<<D;
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una Division definida";
										break;
							}
					}
					else if(i==2){
						switch(longi){
								case 4:	D=(num2[0]*10+num2[1])/num2[3];
										cout<<"="<<D;
										break;
								case 5:	D=(num2[0]*10+num2[1])/(num2[3]*10+num2[4]);
										cout<<"="<<D;
										break;
								case 6:	D=(num2[0]*10+num2[1])/(num2[3]*100+num2[4]*10+num2[5]);
										cout<<"="<<D;
										break;
								case 7:	D=(num2[0]*10+num2[1])/(num2[3]*1000+num2[4]*100+num2[5]*10+num2[6]);
										cout<<"="<<D;
										break;
								case 8:	D=(num2[0]*10+num2[1])/(num2[3]*10000+num2[4]*1000+num2[5]*100+num2[6]*10+num2[7]);
										cout<<"="<<D;
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una division definida";
										break;
						}
					}
					else if(i==3){
						switch(longi){
								case 5:	D=(num2[0]*100+num2[1]*10+num2[2])/num2[4];
										cout<<"="<<D;
										break;
								case 6:	D=(num2[0]*100+num2[1]*10+num2[2])/(num2[4]*10+num2[5]);
										cout<<"="<<D;
										break;
								case 7:	D=(num2[0]*100+num2[1]*10+num2[2])/(num2[4]*100+num2[5]*10+num2[6]);
										cout<<"="<<D;
										break;
								case 8:	D=(num2[0]*100+num2[1]*10+num2[2])/(num2[4]*1000+num2[5]*100+num2[6]*10+num2[7]);
										cout<<"="<<D;
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una division definida";
										break;
						}
					}
					else if(i==4){
						switch(longi){
								case 6:	D=(num2[0]*1000+num2[1]*100+num2[2]*10+num2[3])/num2[5];
										cout<<"="<<D;
										break;
								case 7:	D=(num2[0]*1000+num2[1]*100+num2[2]*10+num2[3])/(num2[5]*10+num2[6]);
										cout<<"="<<D;
										break;
								case 8:	D=(num2[0]*1000+num2[1]*100+num2[2]*10+num2[3])/(num2[5]*100+num2[6]*10+num2[7]);
										cout<<"="<<D;
										break;
								case 9:	D=(num2[0]*1000+num2[1]*100+num2[2]*10+num2[3])/(num2[5]*1000+num2[6]*100+num2[7]*10+num2[8]);
										cout<<"="<<D;
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una division definida";
										break;
						}
					}
					else{
							cout<<"\n[Error de Syntaxys] - no es una division definida";
					}
			
		}
		//MULTIPLICACION
		else if(ok[i]=='*'){
					if(i==1){
							switch(longi){
								case 3:
										cout<<"="<<num[0]*num[2];
										break;
								case 4:
										cout<<"="<<num[0]*(num[2]*10+num[3]);
										break;
								case 5:
										cout<<"="<<num[0]*(num[2]*100+num[3]*10+num[4]);
										break;
								case 6:
										cout<<"="<<num[0]*(num[2]*1000+num[3]*100+num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<num[0]*(num[2]*10000+num[3]*1000+num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<num[0]*(num[2]*100000+num[3]*10000+num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una multiplicacion definida";
										break;
							}
					}
					else if(i==2){
						switch(longi){
								case 4:
										cout<<"="<<(num[0]*10+num[1])*num[3];
										break;
								case 5:
										cout<<"="<<(num[0]*10+num[1])*(num[3]*10+num[4]);
										break;
								case 6:
										cout<<"="<<(num[0]*10+num[1])*(num[3]*100+num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<(num[0]*10+num[1])*(num[3]*1000+num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*10+num[1])*(num[3]*10000+num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una multiplicacion definida";
										break;
						}
					}
					else if(i==3){
						switch(longi){
								case 5:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])*num[4];
										break;
								case 6:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])*(num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])*(num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])*(num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una multiplicacion definida";
										break;
						}
					}
					else if(i==4){
						switch(longi){
								case 6:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])*num[5];
										break;
								case 7:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])*(num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])*(num[5]*100+num[6]*10+num[7]);
										break;
								case 9:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])*(num[5]*1000+num[6]*100+num[7]*10+num[8]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una multiplicacion definida";
										break;
						}
					}
					else{
							cout<<"\n[Error de Syntaxys] - no es una multiplicacion definida";
					}
		}
		//SUMA
		else if(ok[i]=='+'){
					if(i==1){
							switch(longi){
								case 3:
										cout<<"="<<num[0]+num[2];
										break;
								case 4:
										cout<<"="<<num[0]+(num[2]*10+num[3]);
										break;
								case 5:
										cout<<"="<<num[0]+(num[2]*100+num[3]*10+num[4]);
										break;
								case 6:
										cout<<"="<<num[0]+(num[2]*1000+num[3]*100+num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<num[0]+(num[2]*10000+num[3]*1000+num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<num[0]+(num[2]*100000+num[3]*10000+num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una suma definida";
										break;
							}
					}
					else if(i==2){
						switch(longi){
								case 4:
										cout<<"="<<(num[0]*10+num[1])+num[3];
										break;
								case 5:
										cout<<"="<<(num[0]*10+num[1])+(num[3]*10+num[4]);
										break;
								case 6:
										cout<<"="<<(num[0]*10+num[1])+(num[3]*100+num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<(num[0]*10+num[1])+(num[3]*1000+num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*10+num[1])+(num[3]*10000+num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una suma definida";
										break;
						}
					}
					else if(i==3){
						switch(longi){
								case 5:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])+num[4];
										break;
								case 6:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])+(num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])+(num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])+(num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una suma definida";
										break;
						}
					}
					else if(i==4){
						switch(longi){
								case 6:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])+num[5];
										break;
								case 7:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])+(num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])+(num[5]*100+num[6]*10+num[7]);
										break;
								case 9:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])+(num[5]*1000+num[6]*100+num[7]*10+num[8]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una suma definida";
										break;
						}
					}
					else{
							cout<<"\n[Error de Syntaxys] - no es una suma definida";
					}
		}
		//RESTA
		else if(ok[i]=='-'){
					if(i==1){
							switch(longi){
								case 3:
										cout<<"="<<num[0]-num[2];
										break;
								case 4:
										cout<<"="<<num[0]-(num[2]*10+num[3]);
										break;
								case 5:
										cout<<"="<<num[0]-(num[2]*100+num[3]*10+num[4]);
										break;
								case 6:
										cout<<"="<<num[0]-(num[2]*1000+num[3]*100+num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<num[0]-(num[2]*10000+num[3]*1000+num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<num[0]-(num[2]*100000+num[3]*10000+num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una resta definida";
										break;
							}
					}
					else if(i==2){
						switch(longi){
								case 4:
										cout<<"="<<(num[0]*10+num[1])-num[3];
										break;
								case 5:
										cout<<"="<<(num[0]*10+num[1])-(num[3]*10+num[4]);
										break;
								case 6:
										cout<<"="<<(num[0]*10+num[1])-(num[3]*100+num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<(num[0]*10+num[1])-(num[3]*1000+num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*10+num[1])-(num[3]*10000+num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una resta definida";
										break;
						}
					}
					else if(i==3){
						switch(longi){
								case 5:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])-num[4];
										break;
								case 6:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])-(num[4]*10+num[5]);
										break;
								case 7:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])-(num[4]*100+num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*100+num[1]*10+num[2])-(num[4]*1000+num[5]*100+num[6]*10+num[7]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una resta definida";
										break;
						}
					}
					else if(i==4){
						switch(longi){
								case 6:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])-num[5];
										break;
								case 7:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])-(num[5]*10+num[6]);
										break;
								case 8:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])-(num[5]*100+num[6]*10+num[7]);
										break;
								case 9:
										cout<<"="<<(num[0]*1000+num[1]*100+num[2]*10+num[3])-(num[5]*1000+num[6]*100+num[7]*10+num[8]);
										break;
								default:
									cout<<"\n[Error de Syntaxys] - no es una resta definida";
										break;
						}
					}
					else{
							cout<<"\n[Error de Syntaxys] - no es una resta definida";
					}
		}
		else{
		}
		}
	/*for(int X=0;X<longi;X++){
		cout<<"["<<ok[X]<<"] ";
	}
	cout<<"\n";
	for(int X=0;X<longi;X++){
		cout<<"["<<num[X]<<"] ";
	}*/
	cout<<"\n\n";
	system("pause");	
	return 0;
}

