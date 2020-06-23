/**
* @file PROJECT.cpp
* @author Чуев О.В., гр. 515-і
* @date 23 июня 2020
* @brief Практика
*
* 
*/

#include "Module.h"

int main()
{
	int massiv[N];					//исходный массив
	int Check_massie[N] = { 0 };	//массив признаков
	int* massiv_;					//массив для отсутствующих чисел
	massiv_ = (int*)malloc(N * sizeof(int));

	printf("\t ------------------------------------------------------------------------------------------------------\n");
	printf("\t|Our program will generate 900 numbers in range (100-999) and will find numbers that arent in this list|\n");
	printf("\t ------------------------------------------------------------------------------------------------------\n");
	printf("\t|Below you can see this numbers                                                                        |\n");
	printf("\t ------------------------------------------------------------------------------------------------------\n");

	generate(massiv);
	find(massiv, Check_massie, massiv_);
	output(massiv_);

	return EXIT_SUCCESS;
}