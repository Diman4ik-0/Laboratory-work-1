#include "pch.h"
#include <windows.h>

using namespace System;

int main(array<String^>^ args)
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Console::WriteLine("Р-1: Додати слова 'begin' та 'end'");
    Console::Write("Введіть рядок: ");
    String^ str1 = Console::ReadLine();
    String^ result1 = "begin " + str1 + " end";
    Console::WriteLine("Новий рядок: {0}", result1);
    Console::WriteLine("Довжина: {0}", result1->Length);
    Console::WriteLine();

    Console::WriteLine("Р-2: Об'єднання двох рядків");
    Console::Write("Введіть перший рядок: ");
    String^ s1 = Console::ReadLine();
    Console::Write("Введіть другий рядок: ");
    String^ s2 = Console::ReadLine();
    String^ result2 = s1 + " " + s2;
    Console::WriteLine("Результат: {0}", result2);
    Console::WriteLine();

    Console::WriteLine("Р-3: Порівняння двох рядків");
    Console::Write("Введіть перший рядок: ");
    String^ a = Console::ReadLine();
    Console::Write("Введіть другий рядок: ");
    String^ b = Console::ReadLine();
    int cmp = String::Compare(a, b);
    if (cmp == 0)
        Console::WriteLine("Рядки рівні");
    else if (cmp < 0)
        Console::WriteLine("\"{0}\" < \"{1}\"", a, b);
    else
        Console::WriteLine("\"{0}\" > \"{1}\"", a, b);
    Console::WriteLine();

    Console::WriteLine("Р-4: Рядок у зворотному порядку");
    Console::Write("Введіть рядок: ");
    String^ str2 = Console::ReadLine();
    array<wchar_t>^ arr = str2->ToCharArray();
    Array::Reverse(arr);
    String^ result4 = gcnew String(arr);
    Console::WriteLine("Результат: {0}", result4);
    Console::WriteLine();

    Console::WriteLine("Р-5: Який рядок довший?");
    Console::Write("Введіть перший рядок: ");
    String^ line1 = Console::ReadLine();
    Console::Write("Введіть другий рядок: ");
    String^ line2 = Console::ReadLine();
    if (line1->Length > line2->Length)
        Console::WriteLine("Перший рядок довший");
    else if (line1->Length < line2->Length)
        Console::WriteLine("Другий рядок довший");
    else
        Console::WriteLine("Рядки однакової довжини");

    return 0;
}