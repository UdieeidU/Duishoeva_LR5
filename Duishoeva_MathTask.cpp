#include "Duishoeva_MathTask.h"
#include <iostream>
#include <string>

using namespace std;

bool UserInput(string input) {
    if (input.empty()) return false;

    // Проверяем, что все символы — цифры
    for (char c : input) {
        if (!isdigit(c)) return false;
    }

    // Теперь преобразуем в число
    try {
        int number = stoi(input);
        if (number < 0) return false; // дополнительно, хотя по предыдущей проверке минус не пройдет
    } catch (...) {
        return false;
    }
    return true;
}

void EnterDigit(int& varLink, const string& label) {
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while (!UserInput(raw_input)) {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varLink = stoi(raw_input);
}

int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB;
}