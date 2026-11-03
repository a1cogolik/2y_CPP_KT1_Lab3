#include <clocale>
#include <iostream>
#include <windows.h>

#include "io.h"
#include "tasks.h"



namespace {

void PrintMenu() {
  std::cout << "\n--- Лабораторная работа №3 (Вариант 3) ---\n";
  std::cout << "1. Задание 1.3 (Имена)\n";
  std::cout << "2. Задание 2.2, 2.3 (Человек с родителем)\n";
  std::cout << "3. Задание 3.3 (Города)\n";
  std::cout << "4. Задание 4.5, 4.6 (Создаем Имена и Человека)\n";
  std::cout << "5. Задание 5.2 (Кот мяукает)\n";
  std::cout << "0. Выход\n";
  std::cout << "Выбор: ";
}

void RunTask(int choice) {
  switch (choice) {
    case 1: lab3::RunTask1_3(); break;
    case 2: lab3::RunTask2_2_3(); break;
    case 3: lab3::RunTask3_3(); break;
    case 4: lab3::RunTask4_5_6(); break;
    case 5: lab3::RunTask5_2(); break;
    case 0: std::cout << "Выход...\n"; break;
    default: std::cout << "Такого пункта нет.\n"; break;
  }
}

}  // namespace

int main() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  while (true) {
    PrintMenu();
    int choice = lab3::ReadInt("");
    if (choice == 0) break;
    RunTask(choice);
    lab3::Pause();
  }
  return 0;
}