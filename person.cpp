#include "person.h"

#include <iostream>
#include <map>

namespace lab3 {

Person::Person(const std::string& first_name, int height)
    : name_(first_name), height_(height), father_(nullptr) {}

Person::Person(const std::string& first_name, int height, const Person* father)
    : name_(first_name), height_(height), father_(father) {
  ResolveFatherInfo();
}

Person::Person(const Name& name, int height)
    : name_(name), height_(height), father_(nullptr) {}

Person::Person(const Name& name, int height, const Person* father)
    : name_(name), height_(height), father_(father) {
  ResolveFatherInfo();
}

void Person::ResolveFatherInfo() {
  if (father_ == nullptr) return;

  if (name_.surname().empty() && !father_->name_.surname().empty()) {
    name_.set_surname(father_->name_.surname());
  }

  if (name_.patronymic().empty() && !father_->name_.first_name().empty()) {
    name_.set_patronymic(MakePatronymic(father_->name_.first_name()));
  }
}

std::string Person::MakePatronymic(const std::string& father_name) const {
  if (father_name.empty()) return "";

  static const std::map<std::string, std::string> kExceptions = {
      {"Павел", "Павлович"},   {"Лев", "Львович"},
      {"Яков", "Яковлевич"},   {"Пётр", "Петрович"},
      {"Петр", "Петрович"},    {"Михаил", "Михайлович"},
      {"Данила", "Данилович"}, {"Гаврила", "Гаврилович"}};

  auto it = kExceptions.find(father_name);
  if (it != kExceptions.end()) {
    return it->second;
  }

  char last_char = father_name.back();

  if (last_char == 'а' || last_char == 'я') {
    return father_name.substr(0, father_name.size() - 1) + "ич";
  }

  if (last_char == 'й' || last_char == 'ь') {
    return father_name.substr(0, father_name.size() - 1) + "евич";
  }

  return father_name + "ович";
}

void Person::print() const {
  name_.print();
  std::cout << ", рост: " << height_;
}

}  // namespace lab3