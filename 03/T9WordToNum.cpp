/**
 Дата создания: 25.10.17
 Автор: Руслан
 Назначение: Программа переводит введенные слова (ноль, один, два, три, четыре) в числа.
 Например: Ноль = 0.
**/

#include "../std_lib_facilities.h"

int main()
{
// Приветствие
  cout << "Программа переводит введенные слова (ноль, один, два, три, четыре) в числа. "
        << "Например: Ноль = 0.\n"
        << "Введите число от нуля до четырех, словом и нажмите 'Enter':\n";
// Инициализация
  string inWord = "";
// Ввод слов в цикле Ctrl+D или Ctrl+Z для отмены
  while (cin >> inWord)
  { // Проверка и вывод результатов
    if (inWord == "ноль") cout << inWord << " = 0\n";
      else if (inWord == "один") cout << inWord << " = 1\n";
        else if (inWord == "два") cout << inWord << " = 2\n";
          else if (inWord == "три") cout << inWord << " = 3\n";
            else if (inWord == "четыре") cout << inWord << " = 4\n";
              else cout << inWord << " Я не знаю такого числа, умею считать только от 0-4\n";
  }
  return 0;
}
