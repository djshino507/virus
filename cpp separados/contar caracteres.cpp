#include <iostream>

using namespace std ;
int main ()
{
    int cont_car = 0; // contador de caracteres
    int cont_com = 0; // contador de comas
    cout << "Ingrese una frase hasta '. ': " ;
    char c ;
    cin.get(c); // lee un caracter
    while (c !='.') {
        cont_car++ ;
        if (c == ',')
            cont_com ++;
        cin.get(c); // lee un caracter
    }
    cout << "Cantidad de caracteres: " << cont_car << endl
         << "Cantidad de comas: " << cont_com << endl ;
    cin.get(c);
}
