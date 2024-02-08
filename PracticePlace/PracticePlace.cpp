#include <iostream>


int main()
{
    setlocale(LC_ALL, "RUS");
   

    int mansCount;
    int barbersCount;
    int manPerBarber = 8;
    int mansPerBarberPermonth = manPerBarber * 30; // 240

    std::cout << "Добро пожаловать в бородатый город!\n" <<"введите сколько проживает мужчин в городе: "; 
    std::cin >> mansCount; //9000
    std::cout << "Введите сколько работает барберов в городе: ";
    std::cin >> barbersCount; //37

    int needBarbers = mansCount / mansPerBarberPermonth; // 9000 / 240 = 37,5
    if (needBarbers * mansPerBarberPermonth % mansCount) // 37,5 * 240 % 9000 = 1
    {
        needBarbers += 1;
    }

    std::cout << "Необходимое число барберов: " << needBarbers << "\n";
    std::cout << needBarbers << " Барберов смогут сделать дельфинами " << needBarbers * mansPerBarberPermonth << " мужчин за месяц.\n";


    if (needBarbers > barbersCount)
    {
        std::cout << "Нужно больше барберов и золота!!!\n";
    }
    else if (needBarbers == barbersCount)
    {
        std::cout << "Барберов ровно столько, что бы сделать дельфинарий!!!\n";
    }
    else
    {
        std::cout << "Барберов хватает!!!\n";
    }
    }
 


