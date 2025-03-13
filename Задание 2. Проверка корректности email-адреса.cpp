// Задание 2. Проверка корректности email-адреса.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>



std::string  emailTrue(std::string checkedEmail)
{
    bool check;
    std::string onePart, twoPart, answer;
    int kollPosishen = checkedEmail.find("@");
    if (checkedEmail.find("@") != std::string::npos)
    {
        onePart = checkedEmail.substr(1, kollPosishen), twoPart = checkedEmail.substr(kollPosishen);
        if (onePart.length() > 0 && onePart.length() < 65 && twoPart.length() > 0 && onePart.length() < 65)
        {
            for (int i = 0; i < checkedEmail.length(); i++)
            {
                if ((checkedEmail[i] > 32 && checkedEmail[i] < 58 && checkedEmail[i] != 34 && checkedEmail[i] != 40 && checkedEmail[i] != 41 && checkedEmail[i] != 44)
                    || (checkedEmail[i] > 93 && checkedEmail[i] < 127)
                    || (checkedEmail[i] > 62 && checkedEmail[i] < 123)
                    )
                {
                    answer = "yes";
                }
                else
                {
                    answer = "no";
                    break;
                }
            }
        }
        else
        {
            answer = "no";
        }
    }
    else
    {
        answer = "no";
    }

    return answer;
}

int main()
{

    std::string answer, chekEmail;


    std::cout << "enter emaiil: \n";
    std::cin >> chekEmail;
    answer = emailTrue(chekEmail);
    std::cout << answer;
}
//вы не обозначили условия для второй части строки 
//по этому строка проверяется не разными частями ,а одной строкой (не стала угадывать какие символы могут находиться во второй части строки )




