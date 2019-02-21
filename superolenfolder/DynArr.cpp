#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
using namespace std;

int main()
{
	// ������������ ���������� ��������� ��������� �������
	const int NUMBER_RAND_MAX = 100;
	//�����������
	setlocale(LC_CTYPE, "Russian");
	// ���������� ��������� ��������� �����
	srand(time(NULL));
	// ��������� ���������� ��������� �������
	int count = int((double)rand() / RAND_MAX*NUMBER_RAND_MAX);
	// �������� ������ ��� ������������ ������
	double *arr = new double[count];

	// ����������� ������ ���������� �������
	for (int i = 0; i < count; i++)
	{
		arr[i] = (double)rand() / RAND_MAX;
	}

	// ���������� ����� ������������ � ������������� ��������
	double min_value = arr[0];
	double max_value = arr[0];
	for (int i = 0; i < count; i++)
	{
		if (min_value > arr[i]) min_value = arr[i];
		if (max_value < arr[i]) max_value = arr[i];
	}

	cout << "����������� �������� -  " << min_value << endl;
	cout << "������������ �������� - " << max_value << endl;

	// ����������� ������, ���������� ��� ������������ ������
	delete[] arr;
	cin.get();
	return 0;
}
