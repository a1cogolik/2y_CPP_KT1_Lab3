#ifndef LAB3_CITY_CITY_H_
#define LAB3_CITY_CITY_H_

#include <string>
#include <utility>
#include <vector>

namespace lab3 {

class City {
 public:
  explicit City(std::string name);

  void add_path(City* destination, int cost);
  void print() const;

 private:
  std::string name_;
  std::vector<std::pair<City*, int>> paths_;
};

}  // namespace lab3

#endif  // LAB3_CITY_CITY_H_