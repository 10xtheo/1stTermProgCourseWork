#include <iostream>
#include <ncurses.h>
#include "1.cpp"
#include "2.cpp"
#include "3.cpp"
#include "4.cpp"
int main()
{
  while (true)
  {
    cout << "Добро пожаловать!" << endl
    << "Выберите работу от 1 до 4 или нажмите 0 для выхода" << endl;
    bool shouldBreakMain = 0;
    int choice = getNumber();
    switch (choice)
    {
      case 0:
      {
        shouldBreakMain = 1;
        break;
      }
      case 1:
      {
        main1();
        break;
      }
      case 2:
      {
        main2();
        break;
      }
      case 3:
      {
        main3();
        break;
      }
      case 4:
      {
        main4();
        break;
      }
      default:
      {
        cout << "Введите номер работы от 1 до 4" << endl;
        break;
      }
    }
    if (shouldBreakMain == 1)
      break;
  }
  return 0;
}
