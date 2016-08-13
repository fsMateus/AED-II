#include <iostream>
#include <string>

using namespace std;

class Veiculo
{
  protected:
		string marca;
		string modelo;
		float preco;

  private:
	    int teste;

  public:

    Veiculo()
    {
		  marca = "";
		  modelo = "";
		  preco = 0.0;
    };

    Veiculo(string mc, string md, float pr)
    {
		  marca = mc;
		  modelo = md;
		  preco = pr;
    };

    ~Veiculo()
    {
     	 cout << "Deletando instacia de Veiculo."<<endl;
    };

    string getMarca()
    {
      return marca;
    };

    void setMarca (string mc)
    {
        marca = mc;
    };

    string getModelo ()
    {
        return modelo;
    };

    void setModelo (string md)
    {
      modelo = md;
    }

    float getPreco ()
    {
      return preco;
    };

    void setPreco(float pr)
    {
      preco = pr;
    };

    int getTeste()
    {
      return teste;
    };

    void setTeste(int ts)
    {
      teste = ts;
    };

    bool andarVeiculo (int velocidade)
    {
      return true;
    };
};

class Carro : public Veiculo
{
    private:
        int tipoCambio, nAssentos;

    public:
        Carro()
        {

        };
        Carro (string mc, string md, float pr, int tc, int na)
        {
            marca = mc;
            modelo = md;
            preco = pr;
            tipoCambio = tc;
            nAssentos = na;

        };
        ~Carro()
        {

        };
        int getTipCamb()
        {
            return tipoCambio;
        };

        void setTipCamb(int tc)
        {
          tipoCambio = tc;
        };
        int getNumAssent()
        {
          return nAssentos;
        };
        void setNumAssent(int na)
        {
            nAssentos = na;
        };
};
