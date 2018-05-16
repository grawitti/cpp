/**
 Дата создания: 03.11.17
 Автор: Руслан
 Назначение: Программа выволняет и выводит результат алгебраической прогрессии увеличения вдвое. Считает в рисе.
 Ответ: int max 31 клетка, double max 1024 клетки.
 Ввод: 
 Вывод: 
	Клетка: 1 - 1 зерен риса
	Клетка: 2 - 2 зерен риса
	Клетка: 3 - 4 зерен риса ...
**/

#include "../std_lib_facilities.h"

int main() {
// Приветствие
	cout << "Программа выволняет и выводит результат алгебраической прогрессии увеличения вдвое.\n";
// Инициализация переменных
	double riceCount = 1;
// Цикл вычисления алгебраичаской прогрессии увеличения результата вдвое
	for (int i = 1; i <= 1024; i++) {
		cout << "Клетка: " << i << " - " << riceCount << " зерен риса\n";
		riceCount+=riceCount;
	}
  return 0;
}
