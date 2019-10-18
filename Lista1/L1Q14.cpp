#include <iostream>

using namespace std;



bool ehPalindrona(string palavra){
    
    int TAM =0,i;

    for(i=0;palavra[i] != '\0';i++){
        TAM++;
    }

    char inverso[TAM];

    for(i=0;i<TAM;i++){
        inverso[i]=palavra[TAM-1-i];
    }
    
    for(i=0;i<TAM;i++){
    if(palavra[i] != inverso[i]){
        return 0;
        
    }
    }
    return 1;
        
    
}



int main(){
    string palavra;
    bool valor=0;
    
    cout<<"Digite uma palavra: ";
    cin>>palavra;
      
     valor =ehPalindrona(palavra);
    if(valor==1){
        cout<<"A palavra é palíndrona? true \n";
    }else{
        cout<<"A palavra é palíndrona? false \n";
    }

    return 0;
}