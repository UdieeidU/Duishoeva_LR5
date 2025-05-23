#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Duishoeva_MathTask.h"

using namespace cute;

void testCalcRectangleArea() {
    int a = 3;
    int b = 5;
    int expected = 15;
    int actual = CalcRectangleArea(a, b);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s;
    s.push_back(CUTE(testCalcRectangleArea));
    s.push_back(CUTE(testEmptyString));
    s.push_back(CUTE(testNonDigitCharacters));
    s.push_back(CUTE(testDigitLetterMix));
    s.push_back(CUTE(testNegativeNumbers));

    ide_listener<> listener;
    makeRunner(listener)(s, "All tests");

    return 0;
}

void testEmptyString() {
    ASSERT(!UserInput("")); // empty string should return false
}

void testNonDigitCharacters() {
    ASSERT(!UserInput("abc")); // non-digit chars only -> false
}

void testDigitLetterMix() {
    ASSERT(!UserInput("12a3")); // digits mixed with letters -> false
}

void testNegativeNumbers() {
    ASSERT(!UserInput("-5")); // negative number -> false
}