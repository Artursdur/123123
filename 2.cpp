#include <iostream>;
#include <Windows.h>;

void papa1();
void papa2();
void papa3();
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	papa1();
	papa2();
	papa3();
	return 0;
}

void papa1()
{
	float s{}, t{};
	std::cout << "Введите расстояние до ажропорта (км)\n";
	std::cin >> s;
	std::cout << "Введите время за которое нужно доехать до аэропорта (ч)\n";
	std::cin >> t;
	std::cout << "Нужная скорость = " << s / t << " км/ч\n";
}


void papa2()
{
	int hour{}, min{}, sec{}, hour2{}, min2{}, sec2{};
	int start_min{}, end_min{};
	int ballanse{};
	std::cout << "Введите время начала пользования скутера\nЧас = ";
	std::cin >> hour;
	if (hour > 24)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время начала пользования скутера\nМинуты = ";
	std::cin >> min;
	if (min > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время начала пользования скутера\nСекунды = ";
	std::cin >> sec;
	if (sec > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время конца поездки \nЧас = ";
	std::cin >> hour2;
	if (hour2 > 24)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время конца поездки \nМинуты = ";
	std::cin >> min2;
	if (min2 > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	std::cout << "\nВведите время конца поездки \nСекунды = ";
	std::cin >> sec2;
	if (sec2 > 60)
	{
		std::cout << "\nНеверно указано время\n";
		exit(0);
	}
	start_min = (hour * 60) + (sec / 60) + min;
	end_min = (hour2 * 60) + (sec2 / 60) + min2;
	ballanse = (end_min - start_min) * 2;
	std::cout << "\nК оплате: " << ballanse << " Гривны\n";
}

float SITO(float s, float rashod, float benz);
void papa3()
{
	float rashod{}, s{}, benz1{}, benz2{}, benz3{}, out1{}, out2{}, out3{};
	std::cout << "\nВведите растояние в км: = ";
	std::cin >> s;
	std::cout << "\nВведите расход бензина на 100км = ";
	std::cin >> rashod;
	std::cout << "\nСтоимость 1 бензина = ";
	std::cin >> benz1;
	std::cout << "\nСтоимость 2 бензина = ";
	std::cin >> benz2;
	std::cout << "\nСтоимость 3 бензина = ";
	std::cin >> benz3;
	std::cout << "Стоимость 1 поездки = " << SITO(s, rashod, benz1) << "\n";
	std::cout << "Стоимость 2 поездки = " << SITO(s, rashod, benz2) << "\n";
	std::cout << "Стоимость 3 поездки = " << SITO(s, rashod, benz3) << "\n";

}

float SITO(float s, float rashod, float benz)
{
	return s / 100 * rashod * benz;
}