#include "tasks.h"

#include <iostream>
#include <vector>

#include "cat.h"
#include "city.h"
#include "io.h"
#include "name.h"
#include "person.h"

namespace lab3 {

void RunTask1_3() {
  std::cout << "--- Задание 1.3: Имена ---\n";
  Name n1("Клеопатра");
  Name n2("Александр", "Пушкин", "Сергеевич");
  Name n3("Владимир", "Маяковский");

  n1.print(); std::cout << "\n";
  n2.print(); std::cout << "\n";
  n3.print(); std::cout << "\n";
}

void RunTask2_2_3() {
  std::cout << "--- Задание 2.2 и 2.3: Человек с родителем ---\n";
  Name n1("Клеопатра");
  Person p1(n1, 152);
  
  Name n2("Александр", "Пушкин", "Сергеевич");
  Person p2(n2, 167);

  Name n3("Владимир", "Маяковский");
  Person p3(n3, 189);

  Person ivan(Name("Иван", "Чудов"), 180);
  Person petr("Петр", 175, &ivan);
  Person boris("Борис", 170, &petr);

  std::cout << "Базовые люди:\n";
  p1.print(); std::cout << "\n";
  p2.print(); std::cout << "\n";
  p3.print(); std::cout << "\n";

  std::cout << "\nСемья Чудовых:\n";
  ivan.print(); std::cout << "\n";
  petr.print(); std::cout << "\n";
  boris.print(); std::cout << "\n";
}

void RunTask3_3() {
  std::cout << "--- Задание 3.3: Города ---\n";
  City a("A"), b("B"), c("C"), d("D"), e("E"), f("F");

  a.add_path(&b, 5);
  a.add_path(&f, 1);
  a.add_path(&d, 6);

  b.add_path(&a, 5);
  b.add_path(&f, 1);
  b.add_path(&c, 3);

  c.add_path(&b, 3);
  c.add_path(&d, 4);

  d.add_path(&c, 4);
  d.add_path(&a, 6);

  e.add_path(&d, 2);
  e.add_path(&f, 2);

  f.add_path(&e, 2);
  f.add_path(&a, 1);
  f.add_path(&b, 1);

  a.print();
  std::cout << "\n";
  b.print();
  std::cout << "\n";
  c.print();
  std::cout << "\n";
  d.print();
  std::cout << "\n";
  e.print();
  std::cout << "\n";
  f.print();
  std::cout << "\n";
}

void RunTask4_5_6() {
  std::cout << "--- Задание 4.5: Создаем Имена ---\n";
  Name n1("Клеопатра");
  Name n2("Александр", "Пушкин", "Сергеевич");
  Name n3("Владимир", "Маяковский");
  Name n4("Христофор", "Бонифатьевич"); 
  
  n1.print(); std::cout << "\n";
  n2.print(); std::cout << "\n";
  n3.print(); std::cout << "\n";
  n4.print(); std::cout << "\n";

  std::cout << "\n--- Задание 4.6: Создаем Человека ---\n";
  Person lev("Лев", 170);
  Person sergey(Name("Сергей", "Пушкин"), 168, &lev);
  Person alexander("Александр", 167, &sergey);

  lev.print(); std::cout << "\n";
  sergey.print(); std::cout << "\n";
  alexander.print(); std::cout << "\n";
}

void RunTask5_2() {
  std::cout << "--- Задание 5.2: Кот мяукает ---\n";
  Cat dog("Дог");
  dog.print(); std::cout << "\n";
  
  std::cout << "Мяукает 1 раз:\n";
  dog.meow();
  
  std::cout << "Мяукает 3 раза:\n";
  dog.meow(3);
}

}  // namespace lab3