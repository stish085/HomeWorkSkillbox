// Задание 1. Шифр Цезаря.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>




void encrypt_caesar(std::string& str, int Shift)
{
    for (int i = 0; i < str.size(); i++)
    {
        if ((char)str[i] > 64 && (char)str[i] < 91)
        {

            str[i] = ((char)str[i] - 64 + Shift) % 26 + 64;

        }
        else if ((char)str[i] > 96 && (char)str[i] < 123)
        {
            str[i] = ((char)str[i] - 96 + Shift) % 26 + 96;
        }
        else continue;
    }
}

int main()
{
    std::string text;
    int shift = 67;

    std::cout << "Text" << std::endl;
    std::cin >> text;
    std::cout << "Shift" << std::endl;
    std::cin >> shift;
    encrypt_caesar(text, shift);
    std::cout << text << std::endl;

}






