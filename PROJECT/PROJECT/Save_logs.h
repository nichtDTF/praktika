#pragma once

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