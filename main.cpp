#include <fstream>

int main(int argc, char **argv) {
  std::ofstream{argv[1]} << "Hello\n";
  return 0;
}