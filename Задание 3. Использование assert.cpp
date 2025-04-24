// Задание 3. Использование assert.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cassert>

    float travelTime(float distance, float speed)
    {
        
        assert(speed > 0);
        float time;
        time = distance / speed;
        return time;
    }
int main()
{   
    float speed, distance;
    std::cout << "enter speed:\n";
    std::cin >> speed;
    std::cout << "enter distance:\n";
    std::cin >> distance;
    std::cout << "time:\n";
    std::cout << travelTime(distance, speed);
}

