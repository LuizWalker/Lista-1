#include<iostream>
#include<fstream>

using namespace std;

int main(){ 

ifstream arquivo; 
string text; 
arquivo.open("rascunho.txt",ios::app);
    
    while(getline(arquivo,text)){ 
         cout<<text<<endl; 
    } 

return 0;
         
}