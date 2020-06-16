/**
* @file PROJECT.cpp
* @author Чуев О.В., гр. 515-і
* @date 16 июня 2020
* @brief Практика
*
* 
*/

#define _CRT_SECURE_NO_WARNINGS
#define N 899

#include <stdio.h>

#include "Generate_Massive.h"
#include "Find_Part.h"
#include "Save_logs.h"

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

	return 0;
}