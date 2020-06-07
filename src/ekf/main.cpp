# include <iostream>
# include <Eigen/Core>
#include "mantosh.hpp"
using namespace std ;
using namespace Eigen ;

int main() {
	cout << "sum: " << sum(2, 3) << endl;
	cout << "Test successful: C++ basic feature is working" << endl;
	cout << "Eigen version : " << EIGEN_MAJOR_VERSION << " . " << EIGEN_MINOR_VERSION << endl;
	cout << "Eigen Integration successful" << endl;
}
