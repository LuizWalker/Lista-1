#include <iostream>
#include <locale.h>

using namespace std;

float soma_de_floats(float a, float b){
    if(a != b){
        return (a+b);
    }
    return (2*a+2*b);
}
int main(){

    setlocale(LC_ALL,"portuguese");

    float a,b,soma=0;

    cout<<"Digite o valor de a: ";
    cin>>a;
    cout<<"Digite o valor de b: ";
    cin>>b;

    soma=soma_de_floats(a,b);
    cout<<"\n\n";

    cout<<"soma = "<<soma<<endl;


}