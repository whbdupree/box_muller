#include <vector>
#include <cmath>
void box_muller(const std::vector<double> u,std::vector<double> &z) {
  z.at(0) = sqrt( -2. * log( u.at(0) ) ) * cos (2 * M_PI * u.at(1) ) ;
  z.at(1) = sqrt( -2. * log( u.at(0) ) ) * sin (2 * M_PI * u.at(1) ) ;
}

