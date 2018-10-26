/**
 Дата создания: 22.11.17
 Автор: Руслан
 Назначение: Вычисление начального отрезка последовательности чисел Фибоначи и вывод его в консоль.
 Пример:
**/

#include "../std_lib_facilities.h"

int main() {
	try {
		cout << "Вычисление начального отрезка последовательности чисел Фибоначи и вывод его в консоль.\n";
		constexpr int MAX_INT = 2147483647; // 2147483647 - максимальное целое число помещающееся в переменную типа int
		int f1 = 0, f2 = 1, f3 = -1; // 1е, 2 и 3 числа в полседовательности Фибоначи
		for (;f3 < MAX_INT;) {
			if (f1 != 0 && f3 <= 0) error("Превышен лимит типа int!");
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
			cout << f3 << ' ';
		}
		cout << endl;
	}
		catch (exception& e) {
			cerr << "\nОшибка: " << e.what() << endl;
			return 1;
		}
		catch (...) {
			cerr << "\nНеизвестное исключение!\n";
			return 2;
		}
}