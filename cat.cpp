#include "cat.h"

#include <iostream>

namespace lab3 {

Cat::Cat(std::string name) : name_(std::move(name)) {}

void Cat::print() const { std::cout << "кот: " << name_; }

void Cat::meow() const { std::cout << name_ << ": мяу!\n"; }

void Cat::meow(int count) const {
  if (count <= 0) return;
  std::cout << name_ << ": ";
  for (int i = 0; i < count; ++i) {
    std::cout << "мяу";
    if (i + 1 < count) {
      std::cout << "-";
    }
  }
  std::cout << "!\n";
}

}  // namespace lab3