#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int main() {
	setlocale(LC_ALL, "rus");
	int n;

	//Задача 1. Сортировка первых N элементов.
	std::cout << " Задача 1.\n Изначальный массив:\n";
	const int size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand()%(10+1-1)+1;//[1..10]
		std::cout << arr1[i] << ' ';

	}
	std::cout << std::endl;// перенос строки текста 
	//а также сброс данных из буфера потока вывода.

	std::cout << " Введите колличество элементов ждя сортировки -> ";
	std::cin >> n;

	//Быстрая сортировка.
	//std::sort(arr1, arr1 + n);

	// Пузырьковая сортировка.
	for (int i = n - 1; i > 0; i--)
		for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);
	std::cout << " Итоговый массив:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";
	
	//Задача 2 Погода.
	std::cout << " Температура за все дни января \n";
	const int size2 = 31;
	double arr2[size2]{};
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-5 -(-30))+(-30);
		arr2[i] += rand() % 11 / 10.0;//добавляем дробное занчение к числу.
		std::cout << arr2[i] << ", ";
	}
	std::cout << "\b\b \n";

	std::cout << " Введите верхнюю границу температуры для проверки ";
	double max_temp,sum = 0.0;
	std::cin >> max_temp;
	int counter = 0;

	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < max_temp)
			counter++;
	}
	std::cout << " Средняя температура за месяц " << sum / size2 << '\n';
	std::cout << " Кол-во дней, когда температура опускалась ниже " << max_temp << " градусов " << counter << "\n\n";

	

	







	return 0;
}