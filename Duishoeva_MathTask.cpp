#include <iostream>
#include "Duishoeva_MathTask.h"

using namespace std;

int main() {
    int NumberA = 0, NumberB = 0;
    // ввод переменной A
    EnterDigit(NumberA, "Сторона A");
    // ввод переменной B
    EnterDigit(NumberB, "Сторона B");

    // вычисление площади прямоугольника
    int RectangleArea = CalcRectangleArea(NumberA, NumberB);
    // вывод значения площади
    cout << "Площадь прямоугольника: " << RectangleArea << endl;

    return 0;
}