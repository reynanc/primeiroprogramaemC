#include <iostream>

int main() {
    ////Para doar sangue é necessário ter entre 18 e 67 anos.
	////Faça um aplicativo que pergunte a idade de uma pessoa e diga se ela
	////pode doar sangue ou não.

	int idade;

	std::cout << "Escreva sua idade: ";
	std::cin >> idade;

	if ((idade >= 18) && (idade <= 67))
	{
		std::cout << "Voce pode doar sangue";
	}
	else
	{
		std::cout << "Voce nao pode doar sangue!";
	}


	//Final
	std::string x;
	std::cout << "\n\n\nAperte qualquer tecla para fechar: ";
	std::cin >> x;
}
