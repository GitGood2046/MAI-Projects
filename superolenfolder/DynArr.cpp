#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
	// Максимальное количество случайных элементов массива
	const int NUMBER_RAND_MAX = 100;
	//Локализация
	setlocale(LC_CTYPE, "Russian");
	// Инициируем генератор случайных чисел
	srand(time(NULL));
	// Случайное количество элементов массива
	int count = int((double)rand() / RAND_MAX*NUMBER_RAND_MAX);
	// Выделяем память под динамический массив
	double *arr = new double[count];

	// Инициириуем массив случайными числами
	for (int i = 0; i < count; i++)
	{
		arr[i] = (double)rand() / RAND_MAX;
	}

	// Производим поиск минимального и максимального значений
	double min_value = arr[0];
	double max_value = arr[0];
	for (int i = 0; i < count; i++)
	{
		if (min_value > arr[i]) min_value = arr[i];
		if (max_value < arr[i]) max_value = arr[i];
	}

	cout << "Минимальное значение -  " << min_value << endl;
	cout << "Максимальное значение - " << max_value << endl;

	// Освобождаем память, отведенную под динамический массив
	delete[] arr;
	cin.get();
	return 0;
}
