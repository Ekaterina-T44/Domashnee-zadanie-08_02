/*zadanie 4/cpp В одномерном массиве, состоящем из N вещественных
чисел вычислить:
■ Сумму отрицательных элементов.
■ Произведение элементов, находящихся между min и max
элементами.
■ Произведение элементов с четными номерами.
■ Сумму элементов, находящихся между первым и последним отрицательными элементами*/ 


#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
	cout << "Vvedite razmer masiva: \n";
	cin >> n;
	int* array = new int[n];
	cout << "Vvedite" << n << "elementov masiva:\n";
	
	for (int i = 0; i < n; i++) {
		cout << "array [" << i + 1 << "]:";
		cin >> array[i];
	}
	int min, max, sum;
	sum = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] < 0)
		{
			sum += array[i];
		}
	}
	cout << "\n Summa otritatelinih elementov:" << sum;
	int i_max, i_min;
	int proizvodn = 1;
	min=array[1];
	max=array[1];
	for (int i = 0; i<n; i++) {
		if (array[i] < min)
		{
			min = array[i];
			i_min = i;
		}
		if (array[i] > max)
		{
			max = array[i];
			i_max = i;
		}
	}
	cout << "\n minimalinii element masiva:" << min;
	cout << "\n max element masiva:" << max;
	i_min++;
	i_max--;
	for (int i = i_min; i < i_max; i++) {
		proizvodn *= array[i];
	}
	cout << "\nProizvedenie elementov nahodeachihsea mejdu min i max elementami:" << proizvodn << "\n";

	for (int i = 0; i < n; i++) {
		if (array[i] < 0) {
			i_min = i;
		}
		break;
	}
		for (int i = n - 1; i > i_min; i++)
		{
			if (array[i] < 0)
			{
				i_max = i;
			}
			break;
		}
	i_min++;
	int pr_minmax = 1;
	for (int i = i_min; i < i_max; i++) {
		pr_minmax *= array[i];
	}
	cout << "\n Summa elementov nahodeachihsea mejdu pervim i poslednim otritatelinim elementam:" << pr_minmax;

	for (int i = i_min; i < i_max; i++) {
		proizvodn *= array[i];
	}
	int pr_2 = 1;
	for (int i = 0; i < n; i+=2) {
		pr_2 *= array[i];
	}
	cout << "\n proizvedenie elementov s cetnimi nomerami:" << pr_2;
			
	return 0;
}


/*
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите размерность массива: ";
	int n;
	std::cin >> n;
	int* a = new int[n];
	std::cout << "Введите " << n << " элементов:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << "a[" << i + 1 << "]: ";
		std::cin >> a[i];
	}
	int negativ = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			negativ += a[i];
		}
	}
	std::cout << "Сумма отрицательных чисел массива = " << negativ << std::endl;
	int max = a[1], i_max, min = a[1], i_min;
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			i_max = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			i_min = i;
		}
	}
	i_min++;
	i_max--;
	int mult = 1;
	for (int i = i_min; i < i_max; i++)
	{
		mult *= a[i];
	}
	std::cout << "Произведение элементов между минимальным и максимальными элементами = " << mult << std::endl;
	mult = 1;
	for (int i = 1; i < n; i += 2)
	{
		mult *= a[i];
	}
	std::cout << "Произведение элементов с четными номерами = " << mult << std::endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			i_min = i;
			break;
		}
	}
	for (int i = n - 1; i > i_min; i--)
	{
		if (a[i] < 0)
		{
			i_max = i;
			break;
		}
	}
	i_min++;
	mult = 1;
	for (int i = i_min; i < i_max; i++)
	{
		mult *= a[i];
	}
	std::cout << "Произведение элементов стоящих между первым и последним отрицательными числами = " << mult << std::endl;
	system("Pause >> 0");
	return 0;
}
*/    

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
