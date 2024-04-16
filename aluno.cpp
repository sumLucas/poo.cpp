#include "aluno.h"

Aluno::Aluno()
{
}

Aluno::Aluno(int nota, string nome, int matricula)
{
    m_nota = nota;
    m_nome = nome;
    m_matricula = matricula;
}

void Aluno::setNota(int nota){
    m_nota = nota;
}
                                                                                                                
int Aluno::getNota(){
    return m_nota;
}

void Aluno::setNome(string nome){
    m_nome = nome;
}

string Aluno::getNome(){
    return m_nome;
}
    
void Aluno::setMatricula(int matricula){
    m_matricula = matricula;
}


int Aluno::getMatricula(){
    return m_matricula;
}
