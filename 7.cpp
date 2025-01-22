#include <iostream>;
#include <Windows.h>;
#include <random>;

void Papa1(int day1, int day2, int montht1, int montht2, int year1, int year2)
{
	int day_start{}, day_end{};
	if (year1 % 4 == 0)
	{
		day_start = day1 + montht1 * 30 + year1 * 366;
	}
	else
	{
		day_start = day1 + montht1 * 30 + year1 * 365;
	}
	if (year2 % 4 == 0)
	{
		day_end = day2 + montht2 * 30 + year2 * 366;
	}
	else
	{
		day_end = day2 + montht2 * 30 + year2 * 365;
	}
	std::cout << "\nкол во  дней = " << day_end - day_start;
}

void Papa2(int a[], int size)
{

	int k{}, sum{};
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
		k += 1;
	}
	std::cout << "\nСреднее арефмитиыческренк = " << sum / k;
}


void Papa3(int a[], int size)
{

	int pol{}, otr{}, nol{};
	for (int i = 0; i < size; i++)
	{
		if (a[i] == 0)
		{
			nol += 1;
		}
		else if (a[i] > 0)
		{
			pol += 1;
		}
		else
		{
			otr += 1;
		}
	}
	std::cout << "\nПоложительных = " << pol << "\nОтрицательных = " << otr << "\nНулей = " << nol;
}


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int day1{}, day2{}, montht1{}, month2{}, year1{}, year2{};
	std::cout << "Введите начальный день: ";
	std::cin >> day1;
	std::cout << "\nВведите  начальный месяц: ";
	std::cin >> montht1;
	std::cout << "\nВведите началный год: ";
	std::cin >> year1;
	std::cout << "\nВведите конечный день : ";
	std::cin >> day2;
	std::cout << "\nВведите конечный месяц : ";
	std::cin >> month2;
	std::cout << "\nВведите конечный год : ";
	std::cin >> year2;
	Papa1(day1,  day2, montht1, month2,  year1,  year2);
	int const size = 3;
	int arr[size]{100, -10, 0};
	Papa2(arr, size);
	Papa3(arr, size);
	return 0;
}

