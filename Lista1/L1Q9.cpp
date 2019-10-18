#include <iostream>
#include <locale.h>

using namespace std;

string helloNome(string Nome){

    return"Olá "+Nome;
}
int main(){

    string nome;

    cout << "Digite um nome qualquer: \n";
    cin >> nome;

    nome=helloNome(nome);

    cout<<""<< nome <<endl;

    return 0;
}