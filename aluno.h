#include <string>

using namespace std;

class Aluno{
    private:
    int m_nota;
    string m_nome;
    int m_matricula;

    public:
    Aluno();
    Aluno (int nota, string nome, int matricula);

    void setNota(int nota);
    int getNota();

    void setNome(string nome);
    string getNome();
    
    void setMatricula(int matricula);
    int getMatricula();

}; 

