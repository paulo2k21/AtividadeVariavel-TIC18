/* Comentário de uma programa em c++ com varias linhas
   Este programa faz nada mais e nada menos que perguntar o nome 
   do usuário e mostra na tela uma mensagem de "olá fulano!".
*/



#include <iostream> // icluir os recursos da bicblioteca de entrada e saída.
#include <string>


using namespace std;

int main(void){

string nome;

cout << "Qual seu nome? " << endl;

cin >> nome;

cout << endl;

cout << "Olá, " << nome << "!" << endl;

  
  
  return(0);

}
