#ifndef LAB3_CAT_CAT_H_
#define LAB3_CAT_CAT_H_

#include <string>

namespace lab3 {

class Cat {
 public:
  explicit Cat(std::string name);

  void print() const;
  void meow() const;
  void meow(int count) const;

 private:
  std::string name_;
};

}  // namespace lab3

#endif  // LAB3_CAT_CAT_H_