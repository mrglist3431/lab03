#include "print.hpp"
#include <fstream>
#include <string>

void print(const std::string& text, std::ofstream& out) {
 out << text;
}

void print(const std::string& text, std::ostream& out) {
 out << text;
}
