#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  std::string name; // Имя пользователя
  std::cin >> name; // Ввод имени ппользователя
  std::cout << "Hello world from " << name
            << std::endl; // Печать "Hello world from (имя польвователя)
}
