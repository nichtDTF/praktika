#include "Module.h"

/*
    ‘ункци€: save_logs()
    ѕараметры:  massiv Ч исходный массив сгенерированных чисел
    ¬озвращает: EXIT_SUCCESS Ч если функци€ завершила работу корректно
                EXIT_FAILURE Ч если функци€ завершила работу некорректно
*/

int save_logs(int* massiv)
{
    FILE* fp;
    char name[] = "logs.txt";
    fp = fopen(name, "w+");
    if (fp == NULL)
    {
        printf("\t\tcan't open %s file to save logs", name);
        return EXIT_FAILURE;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            fprintf(fp, "%i\n", massiv[i]);
        }

        fclose(fp);
        printf("\t\tyou can see all massive elements in %s file", name);
        return EXIT_SUCCESS;
    }
}