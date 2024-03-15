#include <iostream>
#include <windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;

	while (true)
	{
		std::cout << "Введите число: ";
		std::cin >> number;
		int iter = 10,  pow = 1, zero_count = 0, curr_digit;
		double num_length = 1, summ = 0;

		while (number / iter != 0)
		{
			num_length++;
			iter = iter * 10;
		}

		for (int i = 0; i < num_length; i++)
		{
			pow = pow * 10;
		}
		for (int i = 0; i < num_length; i++)
		{
			curr_digit = number % pow / (pow / 10);
			if (curr_digit == 0)
			{
				zero_count++;
			}
			else
			{
				summ += curr_digit;
			}

			pow = pow / 10;
		}
		double arif = summ / num_length;

		std::cout << "Цыфр: " << num_length << "\n" << "Сумма: " << summ << "\n" << "Нулей: " << zero_count << "\n" << "Ариф: " << arif << "\n";
	}


}