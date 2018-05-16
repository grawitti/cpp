/**
 Дата создания: 04.11.17
 Автор: Руслан
 Описание: Программа нахождения корней (x1 и x2) квадратного уравнения, вида ax2+b+c=0.
 Ввод: -5 10 -1
 Вывод: 
 Уравнение: -5x2 + 10 + -1
 Ответ: x1 = 0.105573, x2 = 1.89443
**/

#include "../std_lib_facilities.h"

int main() {
// Приветствие
	cout << "Программа нахождения корней (x1 и x2) квадратного уравнения, вида ax2+b+c=0.\n"
			 << "Введите значения a, b и c, через пробел и нажмите 'Enter':\n";
// Инициализация переменных
	double a, b, c, d, x1, x2 = -1.0;
// Ввод коэффициентов
	for (;cin>>a>>b>>c;) {
		d = b*b - 4*a*c; // Вычисление дискриминатна квадратного уравнения D = square(b) - 4ac
// Нахождение корней
		if (d > 0) { // При дискриминанте > 0, два разных корня
			x1 = (-b + sqrt(d)) / (2*a); // (-b +- sqrt(d)) / (2a)
			x2 = (-b - sqrt(d)) / (2*a);
		} else if (d == 0) { // При дискриминанте = 0, корни равны
				x1 = -b / (2*a); // x1 = x2 = -b / (2a)
				x2 = x1;
			} else { // Если дискриминант отрицательный, то корней нет.
				cout << "Корней на множестве действительных чисел нет.\n";
				cout << "Введите значения a, b и c, через пробел и нажмите 'Enter':\n";
				continue;
				}
// Вывод результатов
		cout << "Уравнение: " << a << "x2 + " << b << " + " << c 
				 << "\nОтвет: " << "x1 = " << x1 << ", x2 = " << x2 << "\n"
				 << "Введите значения a, b и c, через пробел и нажмите 'Enter':\n";
	}
  return 0;
}