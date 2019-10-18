#include<iostream>
#include<fstream>
using namespace std;
int main(){ 

    ofstream arquivo;
    arquivo.open("rascunho.txt",ios::app); 
    arquivo<<"Subscrever";

    return 0;
}