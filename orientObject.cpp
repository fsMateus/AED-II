#include "veiculo.hpp"

int main(int argc, char const *argv[]) {
    string texto;
    float valor;
    int numero;

    /*Veiculo veiculo;
    cout<< "Informe a marca do veiculo: "<<endl;
    cin >> texto;
    veiculo.setMarca(texto);

    cout << "Informe o modelo do veiculo: "<<endl;
    cin >> texto;
    veiculo.setModelo(texto);

    cout << "Informe o preco do veiculo: "<<endl;
    cin >> valor;
    veiculo.setPreco(valor);

    cout << "Dados do veiculo: ";
    cout << veiculo.getMarca() << " - ";
    cout << veiculo.getModelo() << " - ";
    cout << veiculo.getPreco() << endl << endl;*/

    Carro *carro;
    carro = new Carro();

    cout << "Informe a marca do carro: " <<endl;
    cin >> texto;
    carro->setMarca(texto);

    cout << "Informe o modelo do carro: " <<endl;
    cin << texto;
    carro->setModelo(texto);

    cout << "Informe o preco do carro: " <<endl;
    cin >> valor;
    carro->setPreco(valor);

    cout << "Informe o tipo de cambio do carro: " <<endl;
    cin >> numero;
    carro->setTipCamb(numero);

    cout << "Informe o numero de assentos do carro: " <<endl;
    cin >> numero;
    carro->setNumAssent(numero);

    cout << "Dados do carro: ";
    cout << carro->getMarca() << " - ";
    cout << carro->getModelo() << " - ";
    cout << carro->getPreco() << " - ";
    cout << carro->getTipCamb() << " - ";
    cout << carro->getNumAssent( << " - ") <<endl <<endl;

    return 0;
}
