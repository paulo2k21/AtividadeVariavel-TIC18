/*Escreva um programa em C++ que gere e imprima o seguinte padrão de
caracteres alfanuméricos, onde o número fornecido pelo usuário é a altura
do padrão:
A
BC
DEF
GHIJ
KLMNO
*/
#include <iostream>
#include <string>

using namespace std;

int main(void)
{

    int numInserido;
    int numDec = 65;
    int aux = 0;

    cout << "Digite um número inteiro 1 a 7 para definir a altura." << endl;
    cin >> numInserido;

    while (aux <= numInserido)
    {

        for (int j = 1; j <= aux; j++)
        {

            cout << char(numDec);

            numDec++;
        }

        cout << " " << endl;

        aux++;
    }

    return (0);
}