/**
 Дата создания: 25.10.17
 Автор: Руслан
 Назначение: Программа предлагает ввести количество монет разного достоинства и выводит результат
 и общую стоимомть монет в долларах и центах.
 Например:
 У Вас:
 23 одноцентовых,
 17 пятицентовых,
 14 десятицентовых,
 7 двацатипятицентовых,
 и 3 пятидесятицентовых монеты.
 Общая стоимость Ваших монет равна 573 центам или 5 доллоров и 73 цента.
**/

#include "../std_lib_facilities.h"

int main()
{
// Приветствие
  cout << "Программа предлагает ввести количество монет разного достоинства и выводит результат "
       << "и общую стоимомть монет в долларах и центах.\n";
// Инициализация переменных
  double oneCent = -1, fiveCent = -1, tenCent = -1, twentyFiveCent = -1, fiftyCent = -1;
// Ввод количества монет
  cout << "Сколько у Вас одноцентовых монет(ы)?\n";
  cin >> oneCent;
  cout << "Сколько у Вас пятицентовых монет(ы)?\n";
  cin >> fiveCent;
  cout << "Сколько у Вас десятицентовых монет(ы)?\n";
  cin >> tenCent;
  cout << "Сколько у Вас двацатипятицентовых монет(ы)?\n";
  cin >> twentyFiveCent;
  cout << "Сколько у Вас пятидесятицентовых монет(ы)?\n";
  cin >> fiftyCent;
// Проверка на отрицательное количество монет
  if (oneCent < 0 or fiveCent < 0 or tenCent < 0 or twentyFiveCent < 0 or fiftyCent < 0)
    {
      cout << "Колличество монет не может быть отрицательным значением!\n";
      return -1;
    }
// Вывод результатов количества монет
  cout << "У Вас:\n"
     << oneCent << " одноцентовых(ая),\n"
     << fiveCent << " пятицентовых(ая),\n"
     << tenCent << " десятицентовых(ая),\n"
     << twentyFiveCent << " двацатипятицентовых(ая),\n"
     << "и " << fiftyCent <<  " пятидесятицентовых монет(ы).\n"
     << "Общая стоимость Ваших монет равна: ";
// Посчет общей суммы в долларах и центах, вывод результатов
  int dollars = (oneCent + fiveCent*5 + tenCent*10 + twentyFiveCent*25 + fiftyCent*50) / 100;
  double cents = (oneCent + fiveCent*5 + tenCent*10 + twentyFiveCent*25 + fiftyCent*50) - dollars * 100;
  cout << dollars << " доллара(ов) " << cents << " цента(ов)\n";
  return 0;
}
