#include "deposit.h"
#include "ctest.h"

CTEST(sumLess100k, dateBetween0and30) {
	int result = vklad(1000,30);
	int extended = 900;
	ASSERT_EQUAL(result, extended);
}

CTEST(sumLess100k, dateBetween31and120) {
	int result = vklad(5000,60);
	int extended = 5100;
	ASSERT_EQUAL(result, extended);
}

CTEST(sumLess100k, dateBetween121and240) {
	int result = vklad(15000,175);
	int extended = 15900;
	ASSERT_EQUAL(result, extended);
}

CTEST(sumLess100k, dateBetween241and365) {
	int result = vklad(50000,300);
	int extended = 56000;
	ASSERT_EQUAL(result, extended);
}

CTEST(sumMore100, dateBetween0and30) {
	int result = vklad(100000,30);
	int extended = 90000;
	ASSERT_EQUAL(result, extended);
}

CTEST(sumMore100, dateBetween31and120) {
	int result = vklad(150000,85);
	int extended = 154500;
	ASSERT_EQUAL(result, extended);
}

CTEST(sumMore100, dateBetween121and240) {
	int result = vklad(225000,240);
	int extended = 243000;
	ASSERT_EQUAL(result, extended);
}

CTEST(sumMore100, dateBetween241and365) {
	int result = vklad(374000,365);
	int extended = 430100;
	ASSERT_EQUAL(result, extended);
}
