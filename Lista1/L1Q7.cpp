#include <iostream>
using namespace std;
int main(){
float a;
char x;
cout<<"Digite um valor para a: ";
cin >> a;
cout<<"Digite x se quiser finalizar o programa: ";
cin >> x;

while((a!=2)&&(x!='x')) {
     
if((a >=10)||(a<=-10)){

cout<<"Palpite muito longe\n";

} else { 

cout<<"Palpite muito perto\n"; }
cout<<"Digite outro valor para a: ";
cin >> a;

cout<<"Digite outro caractere para x caso queira continuar palpitando: ";
cin >> x; }

if(a==2){ 
cout<<"Acertou o número";}

if((x=='x')&&(a!=2)){ 
cout<<"Programa finalizado";}

return 0;}