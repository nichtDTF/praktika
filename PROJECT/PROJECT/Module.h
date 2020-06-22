#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define N 899

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void move_into();				//перемещение отсутствующих чисел в изначальном массиве в отдельный	массив
void output();					//вывод отсутствующих чисел
int  find(int* massiv);			//поиск отсутствующих чисел
int  save_logs(int* massiv);	//сохранение изначального массива чисел
int  Random(int min, int max);  //генерация случайного числа в заданном диапазоне 
int  generate(int* massiv);		//генерация изначального массива чисел
