

#include <iostream>//подключаем библиотеку
#include <math.h>//подключаем математическую библиотеку
using namespace std;//стандартное пространствоимен
int main() //начало функции
{
    float grad, rad;//объявление переменных
    cout << "Введи радианы:"<<endl;//ввод команды
    cin>> rad;//вводим
    grad=(rad*180)/M_PI;//формулы перевода из радиан
    cout  << grad <<endl;//вывод радианы
    return 0;//конец
}


