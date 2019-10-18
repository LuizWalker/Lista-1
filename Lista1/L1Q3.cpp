#include <iostream>
#include <fstream> 

using namespace std;

int main(){ 
ofstream arquivo; 
arquivo.open("rascunho.txt"); 
arquivo<<"Estou adicionando uma linha\n"; 
arquivo<<"C++ é mais fácil que C\n";

return 0;
}