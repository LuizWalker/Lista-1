#include <iostream>

using namespace std;

int soma=0;
int i;

bool soma_2_8(int TAM,int vetor[]){
    for(i=0;i<TAM;i++){
        if(vetor[i]==2){
            soma+=vetor[i];
        }
    }
    if(soma==8){
        return 1;
    }
    return 0;
}

int main(){
    int TAM;

    cout<<"Digite o tamanho do vetor: ";
    cin>>TAM;

    int vetor[TAM];
    bool valor;

    for(i=0;i<TAM;i++){
        cout<<"Atribua um número para cada índice do vetor ";
        cin>>vetor[i];
    }

    valor=soma_2_8(TAM,vetor);

    if(valor==1){
        cout<<"A soma do números 2 nos índices do vetor dão 8? true"<<endl;
    }else{
        cout<<"A soma do números 2 nos índices do vetor dão 8? false"<<endl;
    }

    return 0;
}