#include <iostream>

using namespace std;

int contador=0;
int i;

int contador_Pares(int TAM,int vetor[]){
    for(i=0;i<TAM;i++){
        if((vetor[i]%2)==0){
            contador++;
        }
    }
    return contador;
}

int main(){
    int TAM,i;

    cout<<"Digite o tamanho do vetor: ";
    cin>>TAM;

    int vetor[TAM];

    for(i=0;i<TAM;i++){
        cout<<"Atribua um número para o índice do vetor: \n";
        cin>>vetor[i];
    
    }
    

    cout<<"Existem "<<contador_Pares(TAM,vetor)<<" números pares no vetor"<<endl;

    return 0;
}
