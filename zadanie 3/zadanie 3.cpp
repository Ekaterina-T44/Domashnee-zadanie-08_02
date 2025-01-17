/*zadanie 3.cpp :Пользователь вводит прибыль фирмы за год (12 месяцев).
Затем пользователь вводит диапазон (например, 3 и 6 — поиск
между 3-м и 6-м месяцем). Необходимо определить месяц,
в котором прибыль была максимальна и месяц, в котором
прибыль была минимальна с учетом выбранного диапазона.*/ 

#include <iostream>
using namespace std;
int main()
{
    int const n = 12;
    int zarplata[n];
    int start, end, maxZarplata, minZarplata;

    for (int i = 0; i < n; i++) {
        cout << "enter you zarplata for" << i + 1 << "month\n";
        cin >> zarplata[i];
    }
    cout << "Enter the start for the range interested for you\n";
    cin >> start;
    cout << "Enter the end for the range interested for you\n";
    cin >> end;

    minZarplata = start - 1;
    maxZarplata = start - 1;

    for (int i = start; i <= end - 1; i++) {
        if (zarplata[i] > zarplata[maxZarplata])
        {
            maxZarplata = i;
        }
        if (zarplata[i] < zarplata[minZarplata])
        {
           minZarplata = i;
        }
    }
    cout << "You got the minZarplata in" << minZarplata << " month\n";

    cout << "You got the maxZarplata in" << maxZarplata << " month\n";
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
