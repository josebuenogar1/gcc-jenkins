#include "minunit.h"
#include "main.h"



MU_TEST(test_check) {

   int ret;
 
   /* calling a function to get max value */
   ret = max(100, 200);

   mu_check( ret == 200 );

   mu_check( ret == 100 );

}

MU_TEST_SUITE(test_suite) {
	MU_RUN_TEST(test_check);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return minunit_status;
}
