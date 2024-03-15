#include <iostream>
#include <windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number, thausand, hundred, tens, unit;

	while (true)
	{
		std::cout << "¬ведите число от 1 до 9999: ";
		std::cin >> number;
		if (number < 1 || number > 9999)
		{
			std::cerr << "Error: incorrect input choice\n";
			continue;
		}

		thausand = number / 1000;
		hundred = number % 1000 / 100;
		//std::cout << hundred;
		tens = number % 100 / 10;
		//std::cout << tens;
		unit = number % 10;
		//unit = number - tens - 

		if (thausand == 1) // тыс€чи
		{
			std::cout << "ќдна тыс€ча ";
		}
		else if (thausand == 2)
		{
			std::cout << "ƒве тыс€чи ";
		}
		else if (thausand == 3)
		{
			std::cout << "“ри тыс€чи ";
		}
		else if (thausand == 4)
		{
			std::cout << "„етыре тыс€чи ";
		}
		else if (thausand == 5)
		{
			std::cout << "ѕ€ть тыс€чь ";
		}
		else if (thausand == 6)
		{
			std::cout << "Ўесть тыс€чь ";
		}
		else if (thausand == 7)
		{
			std::cout << "—емь тыс€чь ";
		}
		else if (thausand == 8)
		{
			std::cout << "¬осемь тыс€чь ";
		}
		else if (thausand == 9)
		{
			std::cout << "ƒев€ть тыс€чь ";
		}

		if (hundred == 1) // сотни
		{
			std::cout << "сто ";
		}
		else if (hundred == 2)
		{
			std::cout << "двести ";
		}
		else if (hundred == 3)
		{
			std::cout << "триста ";
		}
		else if (hundred == 4)
		{
			std::cout << "четыреста ";
		}
		else if (hundred == 5)
		{
			std::cout << "п€тьсот ";
		}
		else if (hundred == 6)
		{
			std::cout << "шестьсот ";
		}
		else if (hundred == 7)
		{
			std::cout << "семьсот ";
		}
		else if (hundred == 8)
		{
			std::cout << "восемьсот ";
		}
		else if (hundred == 9)
		{
			std::cout << "дев€тьсот ";
		}
		
		do
		{
			if (tens == 1)
			{
				if (unit == 1) // 10
				{
					std::cout << "одиннадцать рублей\n";
					break;
				}
				else if (unit == 2)
				{
					std::cout << "двенадцать рублей\n";
					break;
				}
				else if (unit == 3)
				{
					std::cout << "тринадцать рублей\n";
					break;
				}
				else if (unit == 4)
				{
					std::cout << "четырнадцать рублей\n";
					break;
				}
				else if (unit == 5)
				{
					std::cout << "п€тнадцать рублей\n";
					break;
				}
				else if (unit == 6)
				{
					std::cout << "шестнадцать рублей\n";
					break;
				}
				else if (unit == 7)
				{
					std::cout << "семнадцать рублей\n";
					break;
				}
				else if (unit == 8)
				{
					std::cout << "восемнадцать рублей\n";
					break;
				}
				else if (unit == 9)
				{
					std::cout << "дев€тнадцать рублей\n";
					break;
				}
				else if (unit == 0)
				{
					std::cout << "дес€ть рублей\n";
					break;
				}
			}
			else if (tens == 2) // 20 - 90
			{
				std::cout << "двадцать ";
			}
			else if (tens == 3)
			{
				std::cout << "тридцать ";
			}
			else if (tens == 4)
			{
				std::cout << "сорок ";
			}
			else if (tens == 5)
			{
				std::cout << "п€тьдес€т ";
			}
			else if (tens == 6)
			{
				std::cout << "шестьдес€т ";
			}
			else if (tens == 7)
			{
				std::cout << "семьдес€т ";
			}
			else if (tens == 8)
			{
				std::cout << "восемьдест ";
			}
			else if (tens == 9)
			{
				std::cout << "дев€носто ";
			}

			if (unit == 1) // единицы
			{
				std::cout << "один рубль\n";
			}
			else if (unit == 2)
			{
				std::cout << "два рубл€\n";
			}
			else if (unit == 3)
			{
				std::cout << "три рубл€\n";
			}
			else if (unit == 4)
			{
				std::cout << "четыре рубл€\n";
			}
			else if (unit == 5)
			{
				std::cout << "п€ть рублей\n";
			}
			else if (unit == 6)
			{
				std::cout << "шесть рублей\n";
			}
			else if (unit == 7)
			{
				std::cout << "семь рублей\n";
			}
			else if (unit == 8)
			{
				std::cout << "восемь рублей\n";
			}
			else if (unit == 9)
			{
				std::cout << "дев€ть рублей\n";
			}
			else if (unit == 0)
			{
				std::cout << "рублей\n";
			}

			break;
		} while (true);

	}


}