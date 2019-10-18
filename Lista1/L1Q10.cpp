#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"portuguese");
   

    bool j;
    bool m;

    cout<<"João está sorrindo? Digite 1 caso esteja ou 0 caso contrário  ";
    cin>>j;
    cout<<"Maria está sorrindo? Digite 1 caso esteja ou 0 caso contrário  ";
    cin>>m;
    
    cout<<"\n";

    if(((j == 1)&&(m == 1))||((j == 0)&&(m == 0))){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    



    return 0;
}