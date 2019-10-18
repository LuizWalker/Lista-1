#include <iostream>
#include <math.h>

using namespace std;

void quadrado(int *valor){

  float Ao_quadrado;

  Ao_quadrado = *valor * *valor;
  *valor = Ao_quadrado;
    
}

int main(){
    
    int a;
    cout<<"Atribua um valor para a: \n";
    cin>>a;
    quadrado(&a);
    cout<<"Valor ao quadrado de a: "<<a<<endl;
    
    return 0;
}

