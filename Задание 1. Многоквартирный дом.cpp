// Задание 1. Многоквартирный дом.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::cout << "Input  sername tenants:"<< std::endl;
    std::string surname[10];
    int flat;
    for (int i=0; i < 10;i++)
    {
        std::cin >> surname[i];

  /*    std::string sernameTrue = "";
        sernameTrue = surname[i];
        for (int j=0; j < sernameTrue.size(); j++)
        {
            if (char(sernameTrue[i]) > 64 && char(sernameTrue[i]) < 91 || char(sernameTrue[i]) >96 && char(sernameTrue[i]) <123)
            {
                continue;
            }
            else
            {
                std::cout << "restart the program you have entered an incorrect last name character";
                exit(0);
            }
        }                                                                          */
    }
    std::cout << " Input flat number:" << std::endl;
    std::cin >> flat;
    std::cout << " Surname piople who live in Flat number " << flat <<" :" << std::endl;
    std::cout << surname[flat-1];

        
}

//код в скобках должен проверять вводимые фамилии на буквеный регистр, но к сожалению по непонятной мне причине выдает ошибку в рандомный момент
