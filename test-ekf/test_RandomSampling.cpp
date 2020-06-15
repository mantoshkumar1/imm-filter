#include "pch.h"
//#include "../ekf/RandomSampling.h"
#include "../ekf/RandomSampling.cpp"


namespace testing {
	/* Reference:
		https://developer.ibm.com/technologies/systems/articles/au-googletestingframework/#list13
	*/
	class TestRandomSampling : public ::testing::Test {
	public:
		TestRandomSampling() {
			// initialization code here
		}

		void SetUp() {
			// code here will execute just before the test ensues 
		}

		void TearDown() {
			// code here will be called just after the test completes
			// ok to through exceptions from here if need be
		}

		~TestRandomSampling() {
			// cleanup any pending stuff, but no exceptions allowed
		}

		// put in any custom data members that you need 
	};

	// Test RandomSampling:: generate_random_seq method
	TEST_F(TestRandomSampling, GeneratePositiveNum) {
		GaussianRandomSampling g;
		EXPECT_EQ(2+1, g.generate_random_seq(2));
	}

}
