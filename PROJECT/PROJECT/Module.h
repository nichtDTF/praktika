#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define N 899

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void move_into();				//����������� ������������� ����� � ����������� ������� � ���������	������
void output();					//����� ������������� �����
int  find(int* massiv);			//����� ������������� �����
int  save_logs(int* massiv);	//���������� ������������ ������� �����
int  Random(int min, int max);  //��������� ���������� ����� � �������� ��������� 
int  generate(int* massiv);		//��������� ������������ ������� �����
