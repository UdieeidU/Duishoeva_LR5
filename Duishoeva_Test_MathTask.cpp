#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Duishoeva_MathTask.h" // подключение модуля с тестируемыми методами

using namespace cute;

void testCalcRectangleArea() {
    // Входные значения
    int a = 3;
    int b = 5;

    // Ожидаемый результат
    int expected = 15;

    // Получение значения с помощью тестируемого метода
    int actual = CalcRectangleArea(a, b);

    // Сравнение ожидаемого результата с полученным
    ASSERT_EQUAL(expected, actual);
}

int main() {
    suite s; // Создаем тестовый набор
    s.push_back(CUTE(testCalcRectangleArea)); // Добавляем тестовую функцию

    ide_listener<> listener; // Создаем listener
    makeRunner(listener)(s, "Test CalcRectangleArea"); // Запускаем тесты

    return 0;
}