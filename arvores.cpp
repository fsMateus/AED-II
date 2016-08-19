#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
  protected:
      int idade;
      string nome;

      Pessoa *filhoEsquerdo;
      Pessoa *filhoDireito;

  public:

    Pessoa ()
    {
        idade = 0;
        nome = "";
        filhoDireito = NULL;
        filhoEsquerdo = NULL;
    };
    Pessoa (int id, string nm)
    {
        idade = id;
        nome = nm;
    };

    ~Pessoa ()
    {
      cout << "destruindo" <<endl;
    };

    int getIdade ()
    {
        return idade;
    };
    void setIdade (int id)
    {
        idade = id;
    };

    string getNome ()
    {
        return nome;
    };
    void setNome (string nm)
    {
        nome = nm;
    };

    void Insere (Pessoa *novo)
    {
        if(novo->idade < this->idade)
        {
            if(this->filhoEsquerdo == NULL)
            {
                filhoEsquerdo = novo;
                cout << "inserido a esquerda " <<endl;
            }else{
                this->filhoEsquerdo->Insere(novo);
            }
        }
        else
        {
            if(this->filhoDireito == NULL)
            {
                filhoDireito = novo;
                cout << "inserido a direita " <<endl;
            }else{
                this->filhoDireito->Insere(novo);
            }
        }
    };

};




int main(int argc, char const *argv[]) {
    Pessoa *raiz = NULL;
    Pessoa *novo;
    int idade;
    string nome;
    int i,qtd;
    cout << "Quantos elementos a arvore deve conter: " <<endl;
    cin >> qtd;

    for(i=0;i<qtd;i++)
    {
        novo = new Pessoa();
        cout << "digite o nome: " <<endl;
        cin >> nome;
        novo->setNome(nome);

        cout << "informe a idade: " <<endl;
        cin >> idade;
        novo->setIdade(idade);

        if (raiz == NULL)
        {
          raiz = novo;
        }else{
            raiz->Insere(novo);
        }
  }
  return 0;
}
