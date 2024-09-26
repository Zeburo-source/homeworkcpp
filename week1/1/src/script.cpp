#include <iostream>
#include <string>

int main() {
	std::string name;
	
	
	//Запрос имени пользователя
	std::cout << "Введите ваше имя: ";
	std::getline(std::cin, name); //Чтение строки с пробелами


	//Вывод фразы с именем пользователя
	std::cout << "Привет, " << name << "!" << std::endl;

	return 0;
}
