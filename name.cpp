#include "name.h"

#include <iostream>

namespace lab3 {

Name::Name(std::string first_name) : first_name_(std::move(first_name)) {}

Name::Name(std::string first_name, std::string surname)
    : first_name_(std::move(first_name)), surname_(std::move(surname)) {}

Name::Name(std::string first_name, std::string surname, std::string patronymic)
    : first_name_(std::move(first_name)),
      surname_(std::move(surname)),
      patronymic_(std::move(patronymic)) {}

void Name::print() const {
  if (!surname_.empty()) {
    std::cout << surname_ << " ";
  }
  std::cout << first_name_;
  if (!patronymic_.empty()) {
    std::cout << " " << patronymic_;
  }
}

}  // namespace lab3