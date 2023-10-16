#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
int main() {
	setlocale(LC_ALL, "Rus");
	int n,m;
	// Сортировка первых пяти элементов
	//std::cout << "Задача 1\nИзначальный массив";
	//const int size1 = 10;
	//int arr1[size1];
	//srand(time(NULL));
	//for (int i = 0; i < size1; i++) {// меняем int i = 0 на int i = 4 
	//	arr1[i] = rand() % 10 + 1; //[1..10]
	//	//rand() % (b = 1 - 1) + a;
	//	std::cout << arr1[i] << ' ';
	//}
	//std::cout << std::endl;

	// Пузырьковая сортировка
	/*for (int i = size1 - 1; i > 0; i--)
			for(int j = 0; j<i;j++)
				if (arr1[j] > arr1[j + 1]) {
					
					std::swap(arr1[j], arr1[j + 1]);
				}*/

	// Быстрая сортировка

	//std::sort(arr1, arr1 + size1);// Если надо отсортировать первые 5 элементов то передаем сюда 5 (arr1, arr1 + 5)

	//std::cout << "  ";
	//for (int j = 0; j < size1; j++)
	//	std::cout << arr1[j];
	//Задача 2
	// Дана случайная темперратура воздуха от -30 до -1
	//Вывести сколько раз опускалась темперратура в январе ниже 
	//std::cout << "Задача2.\nТемерратура за все дни января";
	//const int size2 = 31;
	//int arr2[size2];
	//srand(time(NULL));
	//for (int i = 0; i < size2; i++) {
	//	arr2[i] = rand() % 30 - 30; //(-1+1-(-30))+(-30);// [-30...-1] Меньшее это начало диапазона большее это конец диапазона
	//	// =rand() % 30 - 30;
	//	std::cout << arr2[i] << ", ";
	//}
	//std::cout << "\b\b.\n Введите максимальную темперратуру для отображения -> ";
	//std::cin >> n;
	//int sum = 0;
	//int counter = 0;
	//for (int i = 0; i < size2; i++) {
	//	sum += arr2[i];
	//	counter++;
	//}
	//std::cout << "Средняя температура за месяц: " << (double)sum / size2 << ' \n';
	//std::cout << "Количество дней в которых температура опускалась ниже " <<
	//	n << " градусов: " << counter << " \n\n";

	//Задача 3. Вхождение в диапазон
	std::cout << "Задача 3. \nВведите начало диапазона ->";
	std::cin >> n;
	std::cout<<" Введите конец диапазона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "Массив: \n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 100; //[0...100) вторая формула Делим на 100(Сто не включительно.
		if (arr3[i] >= n && arr3[i] <= m) // if(1 <= 0)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << std::endl;

	return 0;
}