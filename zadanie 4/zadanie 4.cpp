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


