/**
 Дата создания: 19.01.18
 Автор: Руслан
 Назначение: Класс Date (Календарь), версия из раздела 9.4.2. today = 19 мая 1963 года,
 tomorrow = today+1. Вывод в поток cout today и tomorrow.
 Глава 9, зад. 2, стр. 387, Б. Страуструп "Программирование принципы и практика с использованием С++" (2 изд. 2016 г.)
 Пример:
**/

#include "../std_lib_facilities.h"

//Приветствие
void welcomeMessage () {
	cout << "Класс Date (Календарь), версия из раздела 9.4.2. today = 19 мая 1963 года, "
	     << "tomorrow = today+1.\n";
}

// Простая структура Date
struct Date {
	int y, m, d; // год, месяц, день
	Date(int yy, int mm, int dd) : y{yy}, m{mm}, d{dd} { 
		if (!init_day(yy,mm,dd)) error("Неправильная дата.");
	}
	bool init_day (const int& y, const int& m, const int& d);
	void add_day(int n);
};

bool Date::init_day (const int& y, const int& m, const int& d) {
	if ((2200 > y && y > 1500) && (m > 0 && m <= 12) && (d > 0 && d <= 31)) return true;
	return false;
}

void Date::add_day(int n) {
		d = (d+n > 31) ?(d+n)-31 :d = d+n;
}

ostream& operator<<(ostream& os, const Date& dd) {
	if (dd.m < 10) {
		return os << dd.d
						<< ".0" << dd.m
						<< '.' << dd.y << " г.";
	} else return os << dd.d
						<< '.' << dd.m
						<< '.' << dd.y << " г.";
}

int main() {
	try {
		welcomeMessage();
		Date today{2017,11,32};
		Date tomorrow = today;
		tomorrow.add_day(1);
		cout << "today: "<< today << "\ntomorrow: " << tomorrow << endl;
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
