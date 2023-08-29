#include <iostream>
#include <string>

using namespace std;

int main(void){

char caracter;

cout << " ################ O valor de Decimal ###########"; 

for (int n = 48; n <= 57; n++)
{
    caracter = n;
   
    cout << " O valor de " << caracter <<  " é " << int(caracter);
    
    cout << endl;

}


cout << " ################ O valor de OCTA ###########";
for (int n = 48; n <= 57; n++)
{
    caracter = n;
   
    cout << " O valor de " << caracter <<  " é " << caracter;
    cout << endl;

}

cout << " ################O valor de HEX ###########";
cout << endl;

for (int n = 48; n <= 57; n++)
{
    caracter = n;
   
    cout << " O valor de " << caracter <<  " é " << caracter;

    cout << endl;

}


}

