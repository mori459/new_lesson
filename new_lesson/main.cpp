#include <iostream>
#include <windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number, thausand, hundred, tens, unit;

	while (true)
	{
		std::cout << "������� ����� �� 1 �� 9999: ";
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

		if (thausand == 1) // ������
		{
			std::cout << "���� ������ ";
		}
		else if (thausand == 2)
		{
			std::cout << "��� ������ ";
		}
		else if (thausand == 3)
		{
			std::cout << "��� ������ ";
		}
		else if (thausand == 4)
		{
			std::cout << "������ ������ ";
		}
		else if (thausand == 5)
		{
			std::cout << "���� ������ ";
		}
		else if (thausand == 6)
		{
			std::cout << "����� ������ ";
		}
		else if (thausand == 7)
		{
			std::cout << "���� ������ ";
		}
		else if (thausand == 8)
		{
			std::cout << "������ ������ ";
		}
		else if (thausand == 9)
		{
			std::cout << "������ ������ ";
		}

		if (hundred == 1) // �����
		{
			std::cout << "��� ";
		}
		else if (hundred == 2)
		{
			std::cout << "������ ";
		}
		else if (hundred == 3)
		{
			std::cout << "������ ";
		}
		else if (hundred == 4)
		{
			std::cout << "��������� ";
		}
		else if (hundred == 5)
		{
			std::cout << "������� ";
		}
		else if (hundred == 6)
		{
			std::cout << "�������� ";
		}
		else if (hundred == 7)
		{
			std::cout << "������� ";
		}
		else if (hundred == 8)
		{
			std::cout << "��������� ";
		}
		else if (hundred == 9)
		{
			std::cout << "��������� ";
		}
		
		do
		{
			if (tens == 1)
			{
				if (unit == 1) // 10
				{
					std::cout << "����������� ������\n";
					break;
				}
				else if (unit == 2)
				{
					std::cout << "���������� ������\n";
					break;
				}
				else if (unit == 3)
				{
					std::cout << "���������� ������\n";
					break;
				}
				else if (unit == 4)
				{
					std::cout << "������������ ������\n";
					break;
				}
				else if (unit == 5)
				{
					std::cout << "���������� ������\n";
					break;
				}
				else if (unit == 6)
				{
					std::cout << "����������� ������\n";
					break;
				}
				else if (unit == 7)
				{
					std::cout << "���������� ������\n";
					break;
				}
				else if (unit == 8)
				{
					std::cout << "������������ ������\n";
					break;
				}
				else if (unit == 9)
				{
					std::cout << "������������ ������\n";
					break;
				}
				else if (unit == 0)
				{
					std::cout << "������ ������\n";
					break;
				}
			}
			else if (tens == 2) // 20 - 90
			{
				std::cout << "�������� ";
			}
			else if (tens == 3)
			{
				std::cout << "�������� ";
			}
			else if (tens == 4)
			{
				std::cout << "����� ";
			}
			else if (tens == 5)
			{
				std::cout << "��������� ";
			}
			else if (tens == 6)
			{
				std::cout << "���������� ";
			}
			else if (tens == 7)
			{
				std::cout << "��������� ";
			}
			else if (tens == 8)
			{
				std::cout << "���������� ";
			}
			else if (tens == 9)
			{
				std::cout << "��������� ";
			}

			if (unit == 1) // �������
			{
				std::cout << "���� �����\n";
			}
			else if (unit == 2)
			{
				std::cout << "��� �����\n";
			}
			else if (unit == 3)
			{
				std::cout << "��� �����\n";
			}
			else if (unit == 4)
			{
				std::cout << "������ �����\n";
			}
			else if (unit == 5)
			{
				std::cout << "���� ������\n";
			}
			else if (unit == 6)
			{
				std::cout << "����� ������\n";
			}
			else if (unit == 7)
			{
				std::cout << "���� ������\n";
			}
			else if (unit == 8)
			{
				std::cout << "������ ������\n";
			}
			else if (unit == 9)
			{
				std::cout << "������ ������\n";
			}
			else if (unit == 0)
			{
				std::cout << "������\n";
			}

			break;
		} while (true);

	}


}