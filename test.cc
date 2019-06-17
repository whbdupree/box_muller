#include <iostream>
#include <random>
#include <vector>
#include "box_muller.hh"

int main() {
  std::random_device rd;
  std::default_random_engine generator(rd());
  std::uniform_real_distribution<double> distribution(0.0,1.0);

  int ii, nn=10;
  std::vector<double> u(2);
  std::vector<double> z(2);
  for (ii=0;ii<nn;ii++){
    u.at(0) = distribution( generator );
    u.at(1) = distribution( generator );
    box_muller( u, z );
    std::cout << z.at(0) << " " << z.at(1) << std::endl;
  }

  return 0;
}
