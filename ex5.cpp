#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

// 5. Змініть код оголошення класу “Студент”, закривши у ньому члени-данные.

class Student
{
private: // змінні тепер прайвет, і з ними тепер не можна взаємодіяти на пряму
    int age;
    string sex;
    int money;

public:
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
    Student(int x, string y, int z)
    {
        age = x;
        sex = y;
        money = z;
    }
    Student()
    {
        age = 0;
        sex = "-";
        money = 0;
    }
    ~Student()
    {
        cout << "Виклик деструктора." << endl;
    }
};

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Student Artur(18, "male", 3000); // взаємодіємо через конструктор
    Artur.print();
    Student Yana;
    Yana.print();
}