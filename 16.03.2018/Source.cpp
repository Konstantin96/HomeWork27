#include <stdio.h>
#include <cctype>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <malloc.h>

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "������� ����� �������, 0 - ��� ������ "; cin >> nz; cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	������ ������������ �����.������� ������ �� ���� �����, ���� �� ����������
			����� 10. ��������� ����� ������������� ��������� �������*/
			int sum = 0, razm = 0;
			int c;
			int *numbers = NULL;
			int *m;
			do
			{
				printf("������� ����� (10 - ��� ������): ");
				scanf("%d", &c);
				razm++;
				m = (int*)realloc(numbers, razm * sizeof(int));
				if (m != NULL)
				{
					numbers = m;
					numbers[razm - 1] = c;
				}
				else
				{
					free(numbers);
					printf("������ ��������� ������");
					system("exit");
				}
			} while (c != 10);

			for (int i = 0; i < razm; i++)
			{
				if (numbers[i] < 0)sum += numbers[i];
			}
			printf("����� ������������� ��������� = %d\n", sum);
			free(numbers);
		}
		


		else if (nz == 2)
		{
			/*2.	������ ������������ �����.������� ������ �� ������������� �����.����������,
			�������� �� ������ ������������� �� �����������.*/
			int sum = 0, razm = 0;
			int c;
			int *numbers = NULL;
			int *m;
			do
			{
				printf("������� ����� (0 - ��� ������): ");
				scanf("%d", &c);
				if (c > 0)
				{
					razm++;
					m = (int*)realloc(numbers, razm * sizeof(int));
					if (m != NULL)
					{
						numbers = m;
						numbers[razm - 1] = c;
					}
					else
					{
						free(numbers);
						printf("ERROR in MEMORI");
						system("exit");
					}
				}
			} while (c != 0);
			int b = 1;
			for (int i = 0; i < razm - 1; i++)
			{
				if (numbers[i + 1] < numbers[i])b = 0;
			}
			if (b == 1)printf("������ ���������� �� �����������\n");
			else printf("������ �� ���������� �� �����������\n");
		}


		else
		{
			cout << "������ ������� �� ���������� \n";
			//           ��� � ������ ���������� ���������!
		}
	}
}