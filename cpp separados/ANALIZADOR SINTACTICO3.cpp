#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	int v1[]={1,2,3,4,5,6,7,8,9,0};//vector1 numeros 
	//vector2 caracteres en minuscula
	char v2[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	//vector3 caracteres en mayuscula
	char v3[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	//vector4 especiales
	char v4[]={'=','+','-','*','/','^','.',',',':',';',' ','¡','!','@','#','$','%','^','&','*','(',')','_','¿','?','~'};
	char td[5];//vector de tipo de entrada
	char var[10];//variabloe
	char td1[]="caracter",td2[]="entero";
	int x=0,longi2=0;
	//DECLARACION
	cout<<"ejemplos:\ncadena a;\nentero b=0;\n";
	for(int x=0;x<=10;x++){
		cout<<"\nDeclare los tipos de datos \n";
		cin.getline(td,10,' ');
		cin>>var[x];
		longi2=strlen(var);
		if (strcmp(td,td1)==0){
				if(var[x]=='=','+','-','*','/','^','.',',',':',';',' ','¡','!','@','#','$','%','^','&','*','(',')','_','¿','?','~'){
					cout<<"[Error] la variable de tipo ["<<var[x]<<"] no puede comenzar con un caracter especia"<<endl;
				}
				else if(var[x]=='1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0'){
						cout<<"[Error] la variable de tipo ["<<td<<"] no puede comenzar con un numero"<<endl;
				}
				else{
					cout<<"Ha declarado una variable ["<<var[x]<<"] de tipo ["<<td<<"]\ncon valor: ";
				}
		}
		else if (strcmp(td,td2)==0){
					if(var[x]=='1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'0'){
						cout<<"[Error] la variable de tipo"<<td<<" no puede comenzar con un numero"<<endl;
					}
					else{
						cout<<"Ha declarado una variable ["<<var<<"] de tipo ["<<td<<"]\ncon valor: "<<var[longi2-2];
					}
				}
		else{
			//cout<<"Ha declarado una variable ["<<var<<"] de tipo ["<<td<<"]\ncon valor: "<<var[longi2-2];
		}
	}
	//cin.getline(palabra,50,'\n');
	//cout<<"los elementos son: "<<caract<<endl;
	system ("pause");
	return 0;
}
