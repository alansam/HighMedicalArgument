#include <iostream>
#include <array>
#include <iomanip>

int main() {

  char c = -1;
  printf("%d %d\n", c, c + 10);

  std::array<std::array<int, 2>, 2> matrix;

  std::cout << "HighMedicalArgument" << std::endl;

  matrix[0] = { 0, 1, };
  matrix[1] = { 1, 0, };

  size_t r_ = 0;
  for (auto row : matrix) {
    for (size_t c_ = 0; c_ < row.size(); ++c_) {
      std::printf("[%zu][%zu] = %d\n", r_, c_, row[c_]);
    }
    ++r_;
  }
}
