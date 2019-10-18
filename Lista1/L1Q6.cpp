#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    
float a,b;
float soma = 0,sub = 0,multi = 0,div = 0;
char sinal;

cout <<"Digite o valor de a: ";
cin >> a;

cout <<"Digite o valor de b: ";
cin >> b;

cout <<"Digite a sinal do operador: ";
cin >> sinal;

  if((sinal == '+') ||(sinal== '-')||(sinal== '*')||(sinal == '/')){ 

    switch (sinal){ 

       case '+': 
       soma = a+b; 
       cout << a <<"+"<<b<<"="<<soma<<endl; 
       break; 

       case '-': 
       sub = a-b; 
       cout << a <<"-"<<b<<"="<<sub<<endl;
       break; 
        
       case '*': 
       multi = a*b; 
       cout << a <<"*"<<b<<"="<<multi<<endl;
       break; 
       
       case '/': 
       div = a/b; 
       cout << a <<"/"<<b<<"="<<div<<endl; 
       break; 
    }
  } else {cout << "Digite um operador das 4 operações básicas";}

return 0;
}