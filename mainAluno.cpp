#include <iostream>
#include "aluno.h"

using namespace std;


int main(){
    Aluno a;
    a.setNota(8);
    a.setNome("Lucas");
    a.setMatricula(2109);


    Aluno b;
    b.setNota(5);
    b.setNome("Joao");
    b.setMatricula(8891);


    Aluno c;
    c.setNota(3);
    c.setNome("Pedro");
    c.setMatricula(7182);

    cout << "Nome: " << a.getNome() << " Matrícula: " << a.getMatricula() << " Nota: " << a.getNota() << endl;
    cout << "Nome: " << b.getNome() << " Matrícula: " << b.getMatricula() << " Nota: " << b.getNota() << endl;
    cout << "Nome: " << c.getNome() << " Matrícula: " << c.getMatricula() << " Nota: " << c.getNota() << endl;
    return 0;
}