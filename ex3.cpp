#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

// 3. Розробте методи класу, які дозволяють виконувати введення/виведення всіх членів-даних класу “Студент” та перевірте їх у головній програмі.

class Student
{
public:
    int age;
    int money;
    string sex;

    void input() // метод класу для введення
    {
        cout << "Введіть вік: ";
        cin >> age;
        cout << "Введіть стать: ";
        cin >> sex;
        cout << "Введіть стипендію: ";
        cin >> money;
    }
    void print() // метод для виведення
    {
        cout << "\nВік студента: " << age << "\nСтать студента: " << sex << "\nСтипендія студента: " << money << endl
             << "\n";
    }
};

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Student Artur;
    Artur.input(); // взаємодіємо з об'єктом класа через методи
    Artur.print();
}