#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

// 2. Напишіть програму, в якій створюються два об'єкти типу “Студент”. Встановіть їх вік, стать та стипендію. Роздрукуйте значення членів-даних об'єктів на екрані.

class Student // класс
{
public:
    int age;
    string sex;
    int money;
};

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Student Pavel; // створюємо об'єкти класу та надаємо їм параметри
    Pavel.age = 18;
    Pavel.sex = "male";
    Pavel.money = 3000;
    Student Liza;
    Liza.age = 18;
    Liza.sex = "female";
    Liza.money = 1200;

    cout << "Вік студента: " << Pavel.age << "\nСтать студента: " << Pavel.sex << "\nСтипендія студента: " << Pavel.money << endl
         << "\n"; // виводимо на екран
    cout << "Вік студента: " << Liza.age << "\nСтать студента: " << Liza.sex << "\nСтипендія студента: " << Liza.money << endl
         << "\n";
}