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
	std::cout << "������� ���������� �� ��������� (��)\n";
	std::cin >> s;
	std::cout << "������� ����� �� ������� ����� ������� �� ��������� (�)\n";
	std::cin >> t;
	std::cout << "������ �������� = " << s / t << " ��/�\n";
}


void papa2()
{
	int hour{}, min{}, sec{}, hour2{}, min2{}, sec2{};
	int start_min{}, end_min{};
	int ballanse{};
	std::cout << "������� ����� ������ ����������� �������\n��� = ";
	std::cin >> hour;
	if (hour > 24)
	{
		std::cout << "\n������� ������� �����\n";
		exit(0);
	}
	std::cout << "\n������� ����� ������ ����������� �������\n������ = ";
	std::cin >> min;
	if (min > 60)
	{
		std::cout << "\n������� ������� �����\n";
		exit(0);
	}
	std::cout << "\n������� ����� ������ ����������� �������\n������� = ";
	std::cin >> sec;
	if (sec > 60)
	{
		std::cout << "\n������� ������� �����\n";
		exit(0);
	}
	std::cout << "\n������� ����� ����� ������� \n��� = ";
	std::cin >> hour2;
	if (hour2 > 24)
	{
		std::cout << "\n������� ������� �����\n";
		exit(0);
	}
	std::cout << "\n������� ����� ����� ������� \n������ = ";
	std::cin >> min2;
	if (min2 > 60)
	{
		std::cout << "\n������� ������� �����\n";
		exit(0);
	}
	std::cout << "\n������� ����� ����� ������� \n������� = ";
	std::cin >> sec2;
	if (sec2 > 60)
	{
		std::cout << "\n������� ������� �����\n";
		exit(0);
	}
	start_min = (hour * 60) + (sec / 60) + min;
	end_min = (hour2 * 60) + (sec2 / 60) + min2;
	ballanse = (end_min - start_min) * 2;
	std::cout << "\n� ������: " << ballanse << " ������\n";
}

float SITO(float s, float rashod, float benz);
void papa3()
{
	float rashod{}, s{}, benz1{}, benz2{}, benz3{}, out1{}, out2{}, out3{};
	std::cout << "\n������� ��������� � ��: = ";
	std::cin >> s;
	std::cout << "\n������� ������ ������� �� 100�� = ";
	std::cin >> rashod;
	std::cout << "\n��������� 1 ������� = ";
	std::cin >> benz1;
	std::cout << "\n��������� 2 ������� = ";
	std::cin >> benz2;
	std::cout << "\n��������� 3 ������� = ";
	std::cin >> benz3;
	std::cout << "��������� 1 ������� = " << SITO(s, rashod, benz1) << "\n";
	std::cout << "��������� 2 ������� = " << SITO(s, rashod, benz2) << "\n";
	std::cout << "��������� 3 ������� = " << SITO(s, rashod, benz3) << "\n";

}

float SITO(float s, float rashod, float benz)
{
	return s / 100 * rashod * benz;
}