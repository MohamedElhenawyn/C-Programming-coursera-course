#include "floors.h"
void searchCB(int KVA)
{

    FILE *fpointer;
    int id , i, y, CB;
    char array[255];
    CB = KVA ;

    fpointer = fopen("cb.txt", "r");

    for (i = 0; i < 100; i++)
    {
        if (CB >= 4 && CB <= 16)
        {
           for (y = 0; y < 100; y++)
           {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 4)
                {
                    fgets(array, 255,(FILE *)fpointer);
                    printf("%s",array);
                    break;
                }

            }
            break;
        }
        else if (CB > 16 && CB <= 24)
        {
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 17)
			    {
                    fgets(array,255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
        break;
        }
        else if (CB > 24 && CB <= 32)
        {
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 25)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }

            }
            break;
        }
		else if (CB > 32 && CB <= 40)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 33)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 40 && CB <= 56)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 41)
                {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 56 && CB <= 83)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 57)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 83 && CB <= 103)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 84)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 103 && CB <= 126)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 104)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }

            }
            break;
        }
		else if (CB > 127 && CB <= 166)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 128)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                break;
                }
            }
            break;
        }
		else if (CB > 166 && CB <= 206)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 167)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 206 && CB <= 246)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 207)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 246 && CB <= 326)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 247)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }

            }
            break;
        }
		else if (CB > 326 && CB <= 406)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if(id == 327)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 406 && CB <= 486)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if (id == 407)
			    {
                    fgets(array, 255, (FILE*)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
		else if (CB > 486 && CB <= 648)
		{
            for (y = 0; y < 100; y++)
            {
                fscanf(fpointer, "%s", array);
                id = atoi(array);
                if (id == 487)
			    {
                    fgets(array, 255, (FILE *)fpointer);
                    printf("%s", array);
                    break;
                }
            }
            break;
        }
    }


    fclose(fpointer);
    return ;
}