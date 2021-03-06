/**
 Дата создания: 19.04.18
 Автор: Руслан
 Назначение: Эксперементы с широной полей вывода.
 Глава 11, зад. 10, стр. 458, Б. Страуструп "Программирование принципы и практика с использованием С++" (2 изд. 2016 г.)
 Пример:
**/

#include "../std_lib_facilities.h"
int main() {
	try 
	{
		cout << "Эксперементы с широной полей вывода.\n";

		cout << "Яблонская" << '|' << setw(20) << "Анастасия" << '|' << setw(11) << "8278441881" << '|' << setw(20) << "sdksusbk@gmail.com" << "|\n"
			<< "Сахибнареев" << '|' << setw(20) << "Руслан" << '|' << setw(11) << "8278234581" << '|' << setw(20) << "sdksbk@gmail.com" << "|\n"
			<< "Воронов" << '|' << setw(20) << "Максим" << '|' << setw(11) << "8278441345" << '|' << setw(20) << "sd23kssbk@gmail.com" << "|\n"
			<< "Сафардзянов" << '|' << setw(20) << "Дамир" << '|' << setw(11) << "8278432881" << '|' << setw(20) << "usbk@gmail.com" << "|\n"
			<< "Галимов" << '|' << setw(20) << "Артур" << '|' << setw(11) << "8278441234" << '|' << setw(20) << "sdоkbsdf6ksusbk@gmail.com" << "|\n";


		keep_window_open();
	}
	catch (exception& e) 
	{
		cerr << "\nОшибка: " << e.what() << endl;
		return 1;
		keep_window_open();
	}
	catch (...) 
	{
		cerr << "\nНеизвестное исключение!\n";
		return 2;
		keep_window_open();
	}
}
