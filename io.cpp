#include "io.h"

#include <iostream>
#include <limits>
#include <string>

namespace lab3 {

int ReadInt(const std::string& prompt) {
  int value = 0;
  std::cout << prompt;
  while (!(std::cin >> value)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "[Ошибка] Введите целое число: ";
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  return value;
}

std::string ReadString(const std::string& prompt) {
  std::string value;
  std::cout << prompt;
  std::getline(std::cin, value);
  return value;
}

void Pause() {
  std::cout << "\nНажмите Enter для продолжения..." << std::flush;
  std::string temp;
  std::getline(std::cin, temp);
}

}  // namespace lab3