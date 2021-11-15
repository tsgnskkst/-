#include <iostream>
#include <locale>
using namespace std;
int main()
{
    setlocale(LC_ALL,".1251");                                                     
    int i,mes = 0;
    cout << "Введіть місяць : ";
    if (mes < 1 && mes > 12)
    {
       cout << "місяць повинен бути в форматі від 1 до 12" << endl;
    }        
    else
    {
       switch(mes)
       {
          case 1:{cout << "В Січні 30 днів\n";break;}
          case 2:{cout << "В Лютому 28 днів\n";break;}
          case 3:{cout << "В Березні 31 день\n";break;}
          case 4:{cout << "В Квітень 30 днів\n";break;}
          case 5:{cout << "В Травні 31 день\n";break;}
          case 6:{cout << "В Червні 30 днів\n";break;}
          case 7:{cout << "В Липні 31 день\n";break;}
          case 8:{cout << "В Серпні 31 дeнь\n";break;}
          case 9:{cout << "В Вересні 30 днів\n";break;}
          case 10:{cout << "В Жовтні 31 день\n";break;}
          case 11:{cout << "В Листопаді 30 днів\n";break;}
          case 12:{cout << "В Грудні 31 день\n";break;}
       
       }
    
    }                                                      
                                                                 
return 0;
}