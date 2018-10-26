/**
 Дата создания: 30.10.17
 Автор: Руслан
 Назначение: Программа считывает введенные длины, cm - сантиметры, in - дюймы, ft - футы и m - метры,
 преобразует все длинны к метрам, считает общую (сумму) длинн, количество введенных длин, выводит сообщения:
 Наименьшее значение: x, Наибольшее значение: х, Наименьшее среди введенных и Наибольшее среди введенных, выводит все
 введенные длины в порядке возрастания, для выхода используется любой символ.
 Пример:
  Ввод: 1.1 m
  Вывод: Наименьшее значение: 1.1
  Наибольшее значение: 1.1
  1
  Сумма длин: 1(м)
  Колличество введенных значений: 1
**/

#include "../std_lib_facilities.h"

int main() {
// Приветствие
  cout << "Программа считывает введенные длины, сантиметры, дюймы, футы и метры, преобразует все длинны к метрам, " 
       << "подсчитывает общую (сумму) длинн, количество введенных длинн, находит наименьшее и наибольшее среди "
       << "введенных значений.\n"
  	   << "Введите длинну и единицу измерения (cm - сантиметры, in - дюймы, ft - футы и m - метры) через пробел"
       << "и нажмите 'Enter'\n Например: 1 m\n";
// Инициализация констант и глобальных переменных
  constexpr double mCentimeter = 100; // Количество сантиметров в 1 метре
  constexpr double mInch = 39.37;// Количество дюймов в 1 метре
  constexpr double mFt = 3.281; // Количество футов в 1 метре
  vector<double> num;
  double sumNum = 0;
  string length = " ";
// Ввод значений
  for (double temp; cin>>temp>>length; ) {
// Преобразование значений в метры
    if (length == "cm") temp /= mCentimeter;
      else if (length == "in") temp /= mInch;
        else if (length == "ft") temp /= mFt;
          else if (length == "m") ;
            else { 
              cout << "Я не знаю такой единицы измерения длинны: " << length << "\n";
              continue;
            }
// Нахождение наименьшего и наибольшего значения
    if (num.size() != 0 && temp < num[num.size()-1]) {
      cout << "Наименьшее значение: " << temp << "\nНаибольшее значение: " << num[num.size()-1] << "\n";
    }
    if (num.size() != 0 && temp > num[0]) {
      cout << "Наибольшее значение: " << temp << "\nНаименьшее значение: " << num[0] << "\n";
    }
    num.push_back(temp);
    sort(num); // Сортировка вектора значений по возрастанию
// Проход по всем элементам вектора длинн и его вывод
    for (double x : num) cout << x << " ";
    sumNum+=temp; // Подсчет суммы длинн
    cout << "\nСумма длинн: " << sumNum << "(м)\n" << "Колличество введенных значений: " << num.size() << "\n";
    cout << "Введите следующее значение или любой символ для выхода:\n";
  }
  return 0;
}