#pragma once

#include <time.h>
#include <stdlib.h>
#include "Save_logs.h"

int Random(int min, int max) 
{ 
	return(rand() % (max - min + 1) + min); 
}

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
