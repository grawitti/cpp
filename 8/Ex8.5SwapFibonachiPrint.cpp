/**
 Дата создания: 10.01.18
 Автор: Руслан
 Назначение: Вычисление заданного отрезка последовательности чисел Фибоначи и вывод его в консоль.
 Пример:
**/

#include "../std_lib_facilities.h"

//Приветствие
void welcomeMessage () {
	cout << "Вычисление заданного отрезка последовательности чисел Фибоначи и вывод его в консоль.\n\n";
}

// Выводит в поток cout вектор целых чисел - v и метку, string - s
void print (const string& s, const vector<int>& v) {
	cout << s << ": ";
	for (int x : v) cout << x << ' ';

	cout << endl << endl;
}

// Создает вектор из последовательности чисел Фибоначи,
// начиная с чисел int - x и y, добаляет их в вектор int - v, пока количество чисел не достигнет int - n
vector<int> getFibonachi (int x, int y, vector<int> v, const int& n) {
	if (x < 0 || y < 0) error("Отрицательные начальные числа!");
	v.push_back(x);
	v.push_back(y);
	int f1 = x, f2 = y, f3 = 1; // 1е, 2 и 3 числа в полседовательности Фибоначи
	for (int i = 2; i < n; ++i) {
		if (f1 != 0 && f3 <= 0) error("Превышен лимит типа int!");
		f3 = f1 + f2; // следующее число в последовательности равно сумме двух предыдущих
		f1 = f2; // передвижение по стеку чисел последовательности
		f2 = f3;
		v.push_back(f3);
	}
	return v;
}

// Инверсия последовательности целочисленного вектора v, возвращает новый вектор
vector<int> swapV (vector<int> v) {
	int temp = -1;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > v[(v.size()-1)-i]) {
			temp = v[i];
			v[i] = v[(v.size()-1)-i];
			v[(v.size()-1)-i] = temp;
		}
	}
	return v;
}

// Инверсия последовательности целочисленного вектора v, изменяет вектор переданный по ссылке
void swapR (vector<int>& v) {
	int temp = -1;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i] > v[(v.size()-1)-i]) {
			temp = v[i];
			v[i] = v[(v.size()-1)-i];
			v[(v.size()-1)-i] = temp;
		}
	}
}

int main() {
	try {
		welcomeMessage();
		vector<int> vi;
		vi  = getFibonachi(3,5,vi,43); 
		print("Вектор чисел Фибоначи",vi); //в типе int умещается от 1 до 45 чисел последовательности Фибоначи
		print("Вектор (swapV)",swapV(vi));
		swapR(vi);
		print("Вектор (swapR)",vi);
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
