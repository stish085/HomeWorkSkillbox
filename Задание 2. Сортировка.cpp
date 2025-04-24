// Задание 2. Сортировка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Enter 15 numbers \n";
    float number[15];
    for (int i = 0; i < 15; i++)
    {
        std::cin >> number[i];
    }
    for (int i = 0; i < 15; i++) 
    {
        for (int j = 0; j < 14; j++) 
        {
            if (number[j] < number[j + 1]) 
            {
                float memory = number[j];
                number[j] = number[j + 1];
                number[j + 1] = memory;
            }
        }
    }
    std:: cout << "sorted array: ";

    for (int i = 0; i < 15; i++) {
        std::cout << number[i] << " "; 
    }
    
}



