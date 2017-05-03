#include "deposit.h"
#include "ctest.h"

CTEST(validation, test1) {
	int result = errore(0, 0);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validation, test2) {
	int result = errore(0, -1);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validation, test3) {
	int result = errore(10000, 366);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validation, test4) {
	int result = errore(10000, -1);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validation, test5) {
	int result = errore(10000,0);
	int extended = 1;
	ASSERT_EQUAL(result, extended);
}

CTEST(validation, test6) {
	int result = errore(10000,365);
	int extended = 1;
	ASSERT_EQUAL(result, extended);
}