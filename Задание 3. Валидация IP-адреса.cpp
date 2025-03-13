// Задание 3. Валидация IP адреса
    

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool validPart(string& s)
{
    int n = s.length();

    
    if (n == 0 || n > 3)
        return false;

   
    for (char c : s)
    {
        if (c < '0' || c > '9')
            return false;
    }

   
    if (s[0] == '0' && n > 1)
        return false;

 
    int num = 0;
    for (char c : s)
    {
        num = num * 10 + (c - '0');
    }

    return num >= 0 && num <= 255;
}


bool isValid(const string& ip)
{

    istringstream ss(ip);
    string part;
    int partCount = 0;
    while (getline(ss, part, '.'))
    {
        if (!validPart(part))
            return false;
        partCount++;
    }

    return partCount == 4;
}

int main()
{  
    std::string adress;

    do {
        std::cout << "The program will run until you enter 1 \n";
        std::cout << "enter iP adress: \n";
        std::cin >> adress;

        cout << (isValid(adress) ? "Valid\n" : "Not valid\n");
    } while (adress != "1");

  
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
