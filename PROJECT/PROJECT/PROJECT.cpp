﻿/**
* @file PROJECT.cpp
* @author Чуев О.В., гр. 515-і
* @date 22 июня 2020
* @brief Практика
*
* 
*/

#include "Module.h"

int main()
{
	int massiv[N];
	
	printf("\t ------------------------------------------------------------------------------------------------------\n");
	printf("\t|Our program will generate 900 numbers in range (100-999) and will find numbers that arent in this list|\n");
	printf("\t ------------------------------------------------------------------------------------------------------\n");
	printf("\t|Below you can see this numbers                                                                        |\n");
	printf("\t ------------------------------------------------------------------------------------------------------\n");

	generate(massiv);
	find(massiv);
	output();

	return EXIT_SUCCESS;
}