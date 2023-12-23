#include <iostream>
#include <string>

using namespace std; 
int main()
{
//    setlocale(LC_ALL, "Russian");
    system("chcp 1251>nul");
    string text, a, b;
    cout << "Введите текст: "; getline(cin, text);// >> text;
    int length = text.length();
    a = text[0];
    b = text[length - 1];
    cout << "//Результат//\nВведённая строка: " << text << "\nДлинна строки: " << length << endl;
    cout << "Первый символ: " << a << endl;
    cout << "Последний символ: " << b << endl;
}

