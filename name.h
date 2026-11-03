#ifndef LAB3_NAME_NAME_H_
#define LAB3_NAME_NAME_H_

#include <string>

namespace lab3 {

class Name {
 public:
  Name() = default;
  explicit Name(std::string first_name);
  Name(std::string first_name, std::string surname);
  Name(std::string first_name, std::string surname, std::string patronymic);

  void print() const;

  const std::string& first_name() const { return first_name_; }
  const std::string& surname() const { return surname_; }
  const std::string& patronymic() const { return patronymic_; }

  void set_surname(const std::string& surname) { surname_ = surname; }
  void set_patronymic(const std::string& patronymic) { patronymic_ = patronymic; }

 private:
  std::string first_name_;
  std::string surname_;
  std::string patronymic_;
};

}  // namespace lab3

#endif  // LAB3_NAME_NAME_H_