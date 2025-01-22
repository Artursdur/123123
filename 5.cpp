#include <iostream>;
#include <Windows.h>;
#include <random>;

void Papa1()
{
	int arr[10]{};
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand();
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	std::cout << "\nМассив: ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\nmax = " << max << "\nmin = " << min;
}


void Papa2()
{
	int arr[10]{};
	int start{}, end{}, a{}, summ{};
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
	}
	std::cout << "\nНачало диапозона: ";
	std::cin >> start;
	std::cout << "\nКонец диапозона: ";
	std::cin >> end;
	std::cout << "\nСумма каких искать ? ";
	std::cin >> a;
	std::cout << "Массив:\n ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\nДиапозон массива\n";
	for (int i = start; i < end; i++)
	{
		std::cout << arr[i] << " ";
		if (arr[i] < a)
		{
			summ += arr[i];
		}

	}
	std::cout << "\nСумма в диапозоне, которые меньше указаного числа = " << summ;
}


void Papa3()
{
	int arr[12]{ 9, 12, 3, 5, 6, 1, 2, 4, 5, 7, 9, 0 };
	int dep{}, start{}, end{}, min = INT_MAX, max = INT_MIN, max1{}, min1{};

	for (int i = 0; i < 12; i++)
	{
		int a{};
		std::cout << "\nПрибыть за " << i + 1 << " месяц ";
		std::cin >> a;
		arr[i] = a;
	}
	std::cout << "\nДиапозон начало: ";
	std::cin >> start;
	std::cout << "\nДиапозон конец: ";
	std::cin >> end;
	std::cout << "\nДиаапозоный массив ";
	for (int i = start - 1; i < end; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			max1 = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			min1 = i;
		}
		std::cout << arr[i] << " ";
	}
	std::cout << "\nmax = " << max << " в " << max1 + 1 << " месяц " << "\nmin = " << min << " в " << min1 + 1 << " месяц ";
}

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Papa1();
	Papa2();
	Papa3();
	return 0;
}

