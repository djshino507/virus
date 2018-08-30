#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	int tamPal=0,va=0,ve=0,vi=0,vo=0,vu=0,vt=0,i=0,j=0,t=0;
	char palabra[50],aux[50],td1[]="caracter",td2[]="cadena",td3[]="entero",td4[]="flotante",td5[]="logico";
	cout<<"\nPuede introducir timpos de datos como: caracter,cadena,entero,flotante ylogico.";
	cout<<"\nDigite una palabra a analizar\nPuede incluir espacios\nterminela con salto de linea\n";
	cin.getline(palabra,50,'\n');
	tamPal=strlen(palabra);//tamaño de la entrada de datos
	if(strcmp(palabra,td1)==0){
		cout<<"\nEs de tipo caracter\n";
		
	}
	else if(strcmp(palabra,td2)==0){
		cout<<"\nEs de tipo cadema\n";
	}
	else if(strcmp(palabra,td3)==0){
		cout<<"\nEs de tipo entero\n";
	}
	else if(strcmp(palabra,td4)==0){
		cout<<"\nEs de tipo flotante\n";
	}
	else if(strcmp(palabra,td5)==0){
		cout<<"\nEs de tipo logico\n";
	}
	else{
		cout<<palabra<<" No es un tipo de dato correcto\n";
	}	
	cout<<"\nUsted introdujo: \n"<<palabra<<"\nCantidad de caracteres: "<<tamPal<<"\nCompuesta por los caracteres: ";
	for(int i=0;i<tamPal;i++){
		cout<<"["<<palabra[i]<<"] ";//almacena los caracteres
		switch(palabra[i]){//cuenta las vocales
								case 'a':
										va++;
										break;
								case 'A':
										va++;
										break;
								case 'e':
										ve++;
										break;
								case 'E':
										ve++;
										break;
								case 'i':
										vi++;
										break;
								case 'I':
										vi++;
										break;
								case 'o':
										vo++;
										break;
								case 'O':
										vo++;
										break;
								case 'u':
										vu++;
										break;
								case 'U':
										vu++;
										break;
								default:
										break;
							}
	}
	vt=va+ve+vi+vo+vu;//total de vocales
	
	cout<<"\nCantidad de Vocales: "<<vt;
	cout<<"\nCantidad de Vocales a: "<<va<<"\nCantidad de Vocales e: "<<ve<<"\nCantidad de Vocales i: "<<vi<<"\nCantidad de Vocales o: "<<vo<<"\nCantidad de Vocales u: "<<vu;
	strcpy(aux,palabra);
	for(int i=0;i<tamPal;i++){
						   for(int j=tamPal-1;j>=1;j--){
													    if(aux[j-1]>aux[j]){
																			         t=aux[j-1];
																			         aux[j-1]=aux[j];
																			         aux[j]=t;
													    }
						   }
	}
	cout<<"\nOdenada alfabeticamente ascendete: \n"<<aux;
	cout<<"\nOdenada alfabeticamente descentende: \n"<<strrev(aux);
	/*for(int j=0;j>tamPal;j++){\\no funciona asi
		cout<<aux[j];
	}*/
	cout<<"\ncadena original invertida: \n"<<strrev(palabra)<<"\n";
		cout<<"\nCadena Origial en mayuscula :\n"<<strupr(palabra)<<"\n\n\n\n";
	//\nEn Minuscula: "<<strlwr(palabra);
	strupr(palabra);
	system("pause");
	return 0;
}
