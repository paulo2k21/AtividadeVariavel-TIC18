/*atividade de testes em sala*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int soma = 0;
    float nota = 0;
    int aux;

    vector <int> vec;

do
{
    
cout << "Digite a nota do aluno" << endl;
cin >> nota;


vec.push_back(nota);



cout << "Deseja inserir outra nota?";
cin >> aux;

} while (aux != 1);



for(int x: vec){

soma = soma + x;

}

cout << soma / 7 << endl;

return(0);

}