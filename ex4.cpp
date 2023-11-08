#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

// 4. Напишіть кілька конструкторів та деструктор для класу “Студент”.

class Student
{
public:
    int age;
    string sex;
    int money;

    void input()
    {
        cout << "Введіть вік: ";
        cin >> age;
        cout << "Введіть стать: ";
        cin >> sex;
        cout << "Введіть стипендію: ";
        cin >> money;
    }
    void print()
    {
        cout << "\nВік студента: " << age << "\nСтать студента: " << sex << "\nСтипендія студента: " << money << endl
             << "\n";
    }

    Student(int x, string y, int z) // конструктор у якому ми відразу можемо вказувати змінні
    {
        age = x;
        sex = y;
        money = z;
    }
    Student() // стандартний конструктор
    {
        age = 0;
        sex = "-";
        money = 0;
    }
    ~Student() // деструктор, виводить напис
    {
        cout << "Виклик деструктора." << endl;
    }
};

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Student Artur(18, "male", 3000);
    Artur.print();
    Student Yana;
    Yana.print();
}