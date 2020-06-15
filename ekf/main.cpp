// C++ standard headers
#include <iostream>

// C++ third party headers 
#include <Eigen/Core>

// User defined headers
#include "Header.h"
#include "RandomSampling.h"

using namespace std;
int main() {
	cout << "hello world" << endl;
	cout << "Eigen version : " << EIGEN_MAJOR_VERSION << " . " << EIGEN_MINOR_VERSION << endl;
	cout << sum(2, 3) << endl;

	Eigen::MatrixXd var(2, 2);
	var << 1, 0,
				0, 1;

	cout << var << "\n";

	RandomSampling* rs;
	GaussianRandomSampling g;
	rs = &g;

	// virtual random generator function binded at runtime
	cout << rs->generate_random_seq(1) << endl;
}
