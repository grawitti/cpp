/**
 Дата создания: 19.03.18
 Автор: Руслан
 Назначение: Реализация класса Date.
 Глава 9, упр. 10, стр. 389, Б. Страуструп "Программирование принципы и практика с использованием С++" (2 изд. 2016 г.)
 Пример:
 Changelog:
	0.9.10 Добавление функций workDay(), weekDay(), isDate()
	0.9.10 Добавление функция leapyear() - высокостный год.
**/

#include "../utils/Date_lib.h"
#include "../std_lib_facilities.h"

int main() {
	try {

	cout << "Класс Date 0.9.11.\n";

	Date d{inputDate()};

	cout << d << " " << getStringDayOfWeek(dayOfWeek(d)) << endl;

	cout << "+1 день: " << addDay(d,1) << endl;
	cout << "Следующий рабочий день: " << nextWorkDay(d) << ' ' << getStringDayOfWeek(dayOfWeek(nextWorkDay(d))) << endl; 
	cout << "Недель в году: " << weekOfYear(d.year()) << endl;
    keep_window_open();
		
	}
	catch (exception& e) {
		cerr << "\nОшибка: " << e.what() << endl;
		keep_window_open();
		return 1;
	}
	catch (int& e) {
		cerr << "\nОшибка: Год, месяц или день введены некорректно." << endl;
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "\nНеизвестное исключение!\n";
		keep_window_open();
		return 2;
	}
}
