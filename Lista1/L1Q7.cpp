#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int palpite;
    int num;

    srand(5);

    num=rand()%20;

    cout<<"Chute um número,entre 0 e 20, se quiser sair digite x: ";
    cin>>palpite;

    while(palpite!=num){

       cout<<"Chute um número,entre 0 e 20, se quiser sair digite x: ";
       cin>>palpite;

       if((palpite==num)) break;
    }
    

    cout<<"o número aleaorio era "<< num<<endl;
    
    if(palpite==num){
        cout<<"Você acertou!!"<<endl;
    }else{
         cout<<"Programa finalizado!!"<<endl;
    }





    return 0;
}
