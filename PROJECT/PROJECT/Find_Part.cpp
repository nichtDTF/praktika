#include "Module.h"

int Check_massie[N] = { 0 };
int* massiv_;
int c = 0;

/*
	�������: move_into()
	���������:
	����������:
*/


void move_into()
{
	massiv_ = (int*)malloc(N * sizeof(int));

	for (int i = 0; i < N; i++)
		if (Check_massie[i] == 0)
		{
			massiv_[c] = (i + 100);
			c++;
		}
}

/*
	�������: output()
	���������:
	����������:
*/

void output()
{
	printf("\n\n%i ", massiv_[0]);
	for (int i = 1; i < c; i++)
	{
		printf("%i ", massiv_[i]);
		if (i % 15 == 0)
		{
			printf("\n");
		}
	}

	printf("\n\n\t ----------------------------------------------------\n");
	printf("\t|Totally was founed %i numbers that aren't in massiv|\n", c);
	printf("    \t ----------------------------------------------------\n\n");
}

/*
	�������: find()
	���������:  massiv � �������� ������ ��������������� �����
	����������: EXIT_SUCCESS � ���� ������� ��������� ������ ���������
*/

int find(int* massiv)
{
	for (int i = 0; i < N; i++)
	{
		int Value = massiv[i];
		Value -= 100;
		Check_massie[Value] = 1;
	}

	move_into();

	return EXIT_SUCCESS;
}

