#include <iostream>
#include "cidades.h"

using namespace std;

int main(){
    Cidades Natal(1850, 200000);


    cout << "O ano de Natal é: " << Natal.getAno() << " e a populacao de Natal é: " << Natal.getPopulacao() << endl; 


    system("pause");


    return 0;
}