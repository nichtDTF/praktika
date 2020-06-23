#include "Module.h"

int c = 0;

/*
	‘ункци€: move_into()
	ѕараметры: Check_massie Ч массив признаков 
			   massiv_ Ч массив отсутствующих чисел
	¬озвращает:
*/


void move_into(int *Check_massie, int* massiv_)
{
	for (int i = 0; i < N; i++)
		if (Check_massie[i] == 0)
		{
			massiv_[c] = (i + 100);
			c++;
		}
}

/*
	‘ункци€: output()
	ѕараметры: massiv_ Ч массив отсутствующих чисел
	¬озвращает:
*/

void output(int* massiv_)
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
	‘ункци€: find()
	ѕараметры:  massiv Ч исходный массив сгенерированных чисел
				Check_massie Ч массива признаков
				massiv_ Ч массив отсутствующих чисел
	¬озвращает: EXIT_SUCCESS Ч если функци€ завершила работу корректно
*/

int find(int* massiv, int* Check_massie, int* massiv_)
{
	for (int i = 0; i < N; i++)
	{
		int Value = massiv[i];
		Value -= 100;
		Check_massie[Value] = 1;
	}

	move_into(Check_massie, massiv_);

	return EXIT_SUCCESS;
}

