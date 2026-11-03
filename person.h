#ifndef LAB3_PERSON_PERSON_H_
#define LAB3_PERSON_PERSON_H_

#include <string>

#include "name.h"

namespace lab3 {

class Person {
 public:
  explicit Person(const std::string& first_name, int height);
  Person(const std::string& first_name, int height, const Person* father);
  Person(const Name& name, int height);
  Person(const Name& name, int height, const Person* father);

  void print() const;

 private:
  void ResolveFatherInfo();
  std::string MakePatronymic(const std::string& father_name) const;

  Name name_;
  int height_;
  const Person* father_;
};

}  // namespace lab3

#endif  // LAB3_PERSON_PERSON_H_