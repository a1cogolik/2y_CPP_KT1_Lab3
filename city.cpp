#include "city.h"

#include <iostream>

namespace lab3 {

City::City(std::string name) : name_(std::move(name)) {}

void City::add_path(City* destination, int cost) {
  paths_.emplace_back(destination, cost);
}

void City::print() const {
  std::cout << name_ << ": ";
  for (size_t i = 0; i < paths_.size(); ++i) {
    std::cout << paths_[i].first->name_ << ":" << paths_[i].second;
    if (i + 1 < paths_.size()) {
      std::cout << ", ";
    }
  }
}

}  // namespace lab3