#include <fstream>
#include <string>

int main(int argc, char **argv) {
  //std::ofstream{argv[1]} << "Hello\n"; milestone 0

  std::ifstream in{argv[1]};
  std::ofstream out{argv[2]};

  std::string line;
  while (std::getline(in, line)) {
    out << line << "\n";
  }
  return 0;
}