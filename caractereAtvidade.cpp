#include <iostream>
#include <string>

using namespace std;

int main(void){

char caracter;


cout << " ################ O valor de Decimal ###########"; 

for (int n = 48; n <= 57; n++)
{
    caracter = n;

   
    cout << " O valor de " << caracter <<  " em decimal: " << dec << int(caracter) <<endl;

    cout << "O valor de  " << caracter << " em octal: " << oct << int(caracter) << endl;

    cout << " O valor de " << caracter <<  " em hexa " << hex << int(caracter) << endl;    

    
    cout << endl;

}



return(0);

}

