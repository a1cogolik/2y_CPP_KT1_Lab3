#ifndef LAB3_IO_IO_H_
#define LAB3_IO_IO_H_

#include <string>

namespace lab3 {

int ReadInt(const std::string& prompt);
std::string ReadString(const std::string& prompt);
void Pause();

}  // namespace lab3

#endif  // LAB3_IO_IO_H_