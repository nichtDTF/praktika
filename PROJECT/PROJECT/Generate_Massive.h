#pragma once

#include <time.h>
#include <stdlib.h>
#include "Save_logs.h"

/*
	‘ункци€: Random()
	ѕараметры:  min Ч минимальное число дл€ диапазона генерации
				max Ч максимальное число дл€ диапазона генерации
	¬озвращает: сгенерированное число
*/

int Random(int min, int max) 
{ 
	return(rand() % (max - min + 1) + min); 
}

/*
	‘ункци€: generate()
	ѕараметры:  massiv Ч исходный массив сгенерированных чисел
	¬озвращает: EXIT_SUCCESS Ч если функци€ завершила работу корректно
*/

int generate(int* massiv)
{
	srand(time(NULL));

	for (int i = 0; i < N; i++)
	{
		massiv[i] = Random(100, 999);
	}
	save_logs(massiv);
	return EXIT_SUCCESS;
}
