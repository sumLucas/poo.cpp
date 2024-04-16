#include "cidades.h"

Cidades::Cidades (int ano, int populacao){
    m_ano = ano;
    m_populacao = populacao;    
}

void Cidades::setPopulacao(int populacao){
    m_populacao = populacao;
}


int Cidades::getPopulacao(){
    return m_populacao;
}

void Cidades::setAno(int ano){
    m_ano = ano;
}


int Cidades::getAno(){
    return m_ano;
}
                