#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    char caracter;

    for (int n = 48; n <= 57; n++)
    {
        caracter = n;

        cout << " O valor de " << caracter << " em decimal: " << dec << int(caracter) << endl;

        cout << "O valor de  " << caracter << " em octal: " << oct << int(caracter) << endl;

        cout << " O valor de " << caracter << " em hexa " << hex << int(caracter) << endl;

        cout << endl;
    }

    cout << "###################### Inserindo um valor #######################" << endl;

    

    cout << "Insira um caracter: " << endl;
    cin >> caracter;


        cout << " O valor de " << caracter << " em decimal: " << dec << int(caracter) << endl;

        cout << "O valor de  " << caracter << " em octal: " << oct << int(caracter) << endl;

        cout << " O valor de " << caracter << " em hexa " << hex << int(caracter) << endl;

        cout << endl;








    return (0);
}
