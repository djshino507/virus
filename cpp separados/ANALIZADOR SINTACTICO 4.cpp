#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	int tamPal=0,va=0,ve=0,vi=0,vo=0,vu=0,vt=0,i=0,j=0,t=0;
	char palabra[50],aux[50];
	cout<<"\nDigite una palabra a analizar\nPuede incluir espacios\nterminela con salto de linea\n";
	cin.getline(palabra,50,'\n');
	tamPal=strlen(palabra);//tamaño de la entrada de datos		
	cout<<"\nUsted introdujo: \n"<<palabra<<"\nCantidad de caracteres: "<<tamPal<<"\nCompuesta por los caracteres: ";
	for(int i=0;i<tamPal;i++){
		cout<<"["<<palabra[i]<<"] ";//almacena los caracteres
		switch(palabra[i]){//cuenta las vocales
								case 'a':
										va++;
										break;
								case 'e':
										ve++;
										break;
								case 'i':
										vi++;
										break;
								case 'o':
										vo++;
										break;
								case 'u':
										vu++;
										break;
								default:
										break;
							}
	}
	vt=va+ve+vi+vo+vu;//total de vocales
	cout<<"\nEn Mayuscula :"<<strupr(palabra);
	//\nEn Minuscula: "<<strlwr(palabra);
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
	cout<<"\ncadena original invertida: "<<strrev(palabra)<<"\n";
	system("pause");
	return 0;
}
