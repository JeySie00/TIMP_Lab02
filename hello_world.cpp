#include <iostream>
#include <string>

int
main(int argc, char** argv)
{
  std::string name; // User name
  std::cin >> name; // Input user name
  std::cout << "Hello world from " << name
            << std::endl; // Print Hello world from "user name"
}