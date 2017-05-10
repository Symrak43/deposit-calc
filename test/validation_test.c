#include "deposit.h"
#include "ctest.h"

CTEST(validationInput, Sum0Date0) {
	int result = errore(0, 0);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validationInput, Sum0dateLessNull) {
	int result = errore(0, -1);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validationInput, Sum10000date366_) {
	int result = errore(10000, 366);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validationInput, Sum10000dateLessNull) {
	int result = errore(10000, -1);
	int extended = 0;
	ASSERT_EQUAL(result, extended);
}

CTEST(validationInput, Sum10000date0) {
	int result = errore(10000,0);
	int extended = 1;
	ASSERT_EQUAL(result, extended);
}

CTEST(validationInput, Sum10000date365) {
	int result = errore(10000,365);
	int extended = 1;
	ASSERT_EQUAL(result, extended);
}