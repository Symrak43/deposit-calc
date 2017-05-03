#include "deposit.h"
#include "ctest.h"

CTEST(less100, test1) {
	int result = vklad(1000,30);
	int extended = 900;
	ASSERT_EQUAL(result, extended);
}

CTEST(less100, test2) {
	int result = vklad(5000,60);
	int extended = 5100;
	ASSERT_EQUAL(result, extended);
}

CTEST(less100, test3) {
	int result = vklad(15000,175);
	int extended = 15900;
	ASSERT_EQUAL(result, extended);
}

CTEST(less100, test4) {
	int result = vklad(50000,300);
	int extended = 56000;
	ASSERT_EQUAL(result, extended);
}

CTEST(less100, test5) {
	int result = vklad(99999,0);
	int extended = 89999;
	ASSERT_EQUAL(result, extended);
}

CTEST(more100, test1) {
	int result = vklad(100000,30);
	int extended = 90000;
	ASSERT_EQUAL(result, extended);
}

CTEST(more100, test2) {
	int result = vklad(150000,85);
	int extended = 154500;
	ASSERT_EQUAL(result, extended);
}

CTEST(more100, test3) {
	int result = vklad(225000,240);
	int extended = 243000;
	ASSERT_EQUAL(result, extended);
}

CTEST(more100, test4) {
	int result = vklad(374000,365);
	int extended = 430100;
	ASSERT_EQUAL(result, extended);
}
