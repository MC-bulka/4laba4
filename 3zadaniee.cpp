#include <iostream>//подключаем библиотеку
#include <math.h>//подключаем математическую библиотеку
using namespace std;//стандартное пространствоимен
int main() //начало функции
{
    float x,a,y,odin;//объявление переменных
    cout << "Введи данные:"<<endl;//ввод команды
    cin>>x>>a>>y;//вводим
    odin=a/x;//один кг
    cout <<"Цена 1 кг:"<<odin<<endl;
    y=odin*y;//цена у кг
    cout  <<"Цена у кг:"<<y<<endl;
    return 0;//конец
}
