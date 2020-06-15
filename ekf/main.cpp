#include <iostream>
#include "Header.h"
#include <Eigen/Core>
using namespace std;
int main() {
	cout << "hello world" << endl;
	cout << "Eigen version : " << EIGEN_MAJOR_VERSION << " . " << EIGEN_MINOR_VERSION << endl;
	cout << sum(2, 3) << endl;

	Eigen::MatrixXd Mantosh(2, 2);
	Mantosh << 1, 0,
				0, 1;

	cout << Mantosh << "\n";

}
