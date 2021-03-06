/**
 Дата создания: 21.11.17
 Автор: Руслан
 Назначение: Получает температуру в градусах Цельсия и преобразует её в градусы Кельвина
 Ввод: -273.15
 Вывод: 0
**/

#include "../std_lib_facilities.h"

// Переводит значение из градусов Цельсия в градусы Кельвина.
double ctoK(double c)
{
	if (c < -273.15) {
		cerr << "Выввели температуру ниже абсолютного нуля 0 градусов Кельвина!\n";
		exit(0);
	}
	double k = c + 273.15; // 0 градусов по Кельвину = -273,15 градусов Цельсия
	return k;
}

int main() {
	try {
		cout << "Получает температуру в градусах Цельсия и преобразует её в градусы Кельвина\n"
				 << "Введите температуру в градусах Цельсия:\n";
		for (double c = 0;cin >> c;) {
			double k = ctoK(c);
			cout << c << " гр. Цельсия = " << k << " гр. Кельвина.\n";
		}
		return 0;
	}
	catch (exception& e) {
		cerr << "Ошибка: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Неизвестное исключение!\n";
		keep_window_open();
		return 2;
	}
}
