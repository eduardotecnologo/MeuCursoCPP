#include <iostream>

#include <string>



int main() {

    // Criando as variáveis

    std::string nome = "Manolo";

    int anos = 20;

    int dias_no_ano = 365;



    // Fazendo a conta

    int total_dias = anos * dias_no_ano;



    // Mostrando o resultado

    std::cout << "Ola, " << nome << "!" << std::endl;

    std::cout << "Voce tem aproximadamente " << total_dias << " dias de vida." << std::endl;


    system("pause");
    return 0;

}


