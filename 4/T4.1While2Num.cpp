/**
 Дата создания: 30.10.17
 Автор: Руслан
 Назначение: Программа считывает и выводит введенные целые числа, используя цикл while, 
 для выхода используется символ '|'.
 Пример вывода:
  1 2
  1 2
**/

#include "../std_lib_facilities.h"

int main() {
// Приветствие
  cout << "Программа считывает и выводит введенные целые числа, используя цикл while, для выхода используется символ '|'.\n"
  	   << "Введите два целых числа через пробел и нажмите 'Enter'\n";
// Инициализация глобальных переменных
  char num = ' ';
  while (num != '|') {
    int i = 0;
    while (i < 2 || num != '|') {
      cin >> num;
      cout << num << "\n";
      ++i;
    }
  }
  return 0;
}
