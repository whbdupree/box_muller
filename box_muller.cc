#include <iostream>
#include <random>
#include <vector>
#include <cmath>

void box_muller(const std::vector<double> u,std::vector<double> &z) {
  z.at(0) = sqrt( -2. * log( u.at(0) ) ) * cos (2 * M_PI * u.at(1) ) ;
  z.at(1) = sqrt( -2. * log( u.at(0) ) ) * sin (2 * M_PI * u.at(1) ) ;
}

int main() {
  std::random_device rd;
  std::default_random_engine generator(rd());
  std::uniform_real_distribution<double> distribution(0.0,1.0);

  int ii, nn=1000;
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
