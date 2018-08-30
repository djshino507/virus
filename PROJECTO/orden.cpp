#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
	int tamPal=0,va=0,ve=0,vi=0,vo=0,vu=0,vt=0,i=0,j=0,t=0;
	char palabra[50],aux[50]=" ";
	//vector3 caracteres en minuscula
	char v2[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	//vector3 caracteres en mayuscula
	char v3[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	//vector4 especiales
	char v4[]={'=','+','-','*','/','^','.',',',':',';',' ','¡','!','@','#','$','%','^','&','*','(',')','_','¿','?','~'};
	cout<<"\nDigite una palabra a analizar\nPuede incluir espacios\nterminela con salto de linea\n";
	cin.getline(palabra,50,'\n');
	tamPal=strlen(palabra);//tamaño de la entrada de datos	
	cout<<"\nUsted introdujo: \n"<<palabra<<"\nCantidad de caracteres: "<<tamPal<<"\nCompuesta por los caracteres: ";
	for(int i=0;i<tamPal;i++){
		cout<<"["<<palabra[i]<<"] ";//almacena los caracteres
	}
	// b0 a1 c2
	//
	
	for(int i=0;i<tamPal;i++){
						   for(int j=tamPal-1;j>=1;j--){
													    if((palabra[j-1]>palabra[j])){
																			         t=palabra[j-1];
																			         palabra[j-1]=palabra[j];
																			         palabra[j]=t;
													    }
						   }
 }
}
	cout<<"\nOdenada alfabeticamente ascendete: \n"<<aux;
	cout<<"\nOdenada alfabeticamente descentende: \n"<<strrev(aux);
	cout<<"\nInversion de caracteres: \n"<<strrev(palabra)<<endl;
	strrev(palabra);
	cout<<"\n\n\n\n";
	system("pause");
	return 0;
	}
