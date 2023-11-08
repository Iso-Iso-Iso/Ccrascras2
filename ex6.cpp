#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

// 6. Напишіть методи доступу до полів класу “Студент”.

class Student
{
private:
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

    int getAge() // (гетер) метод доступу до змінної віку
    {
        return age;
    }
    string getSex() // (гетер) метод доступу до статі
    {
        return sex;
    }
    int getMoney() // (гетер) метод доступу до стипендії
    {
        return money;
    }

    void setAge(int a) // (сеттер) дозволяє змінювати вік
    {
        age = a;
    }
    void setSex(const string &s) // (сеттер) дозволяє змінювати стать
    {
        sex = s;
    }
    void setMoney(int m) // (сеттер) дозволяє змінювати стипендію
    {
        money = m;
    }
};

void main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Student Vlad;
    cout << "Початкові данні студента: " << endl;
    cout << "Вік: " << Vlad.getAge() << endl; // виводимо інформацію через гетери
    cout << "Стать: " << Vlad.getSex() << endl;
    cout << "Стипендія: " << Vlad.getMoney() << endl;
    Vlad.setAge(18); // змінюємо інформацію через сеттери
    Vlad.setSex("male");
    Vlad.setMoney(3000);
    cout << "\nОновлені дані студента:" << endl;
    cout << "Вік: " << Vlad.getAge() << endl; // виводимо оновлену інформацію через гетери
    cout << "Стать: " << Vlad.getSex() << endl;
    cout << "Стипендія: " << Vlad.getMoney() << endl;
}