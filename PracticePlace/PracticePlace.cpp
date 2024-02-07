#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
 
    int mansInCity;
    int barbers;

    std::cout << "Добро пожаловать в Бородатый город!\n" << "Введите сколько работает барберов в городе: ";
    std::cin >> barbers;
    std::cout << "Введите сколько проживает мужчин в городе: ";
    std::cin >> mansInCity;

    int barberWorkShift = 8; 
    int month = 30; 
    int client = month * barberWorkShift; 
    int totalLoad = barbers * client; 
    
     if (totalLoad >= mansInCity) {
        std::cout << "В городе все будут выбриты и гладкие как дельфин!";
    }
    
     if (totalLoad <= mansInCity) {
        std::cout << "В городе все будут заросшие как йети!" "\n";
        std::cout << "Для того чтобы все были дельфинами, нужно ещё: " << (mansInCity - totalLoad) / client << " барберов!";
    }
}

