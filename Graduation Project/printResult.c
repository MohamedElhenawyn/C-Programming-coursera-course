#include "floors.h"
void printRes(struct floor *start, int nOfFloors)
{
    struct floor *ptr ;
    ptr = start ;
    float totOfAll = 0;
    float totKVA ;
    while (ptr != NULL)
    {
        if ((ptr->similar) > 1)
        {
            printf("\n");
            printf("The Total KW of the %d similar "
            "appartments equals : %.2f KW.\n", ptr->similar, (ptr->totKw) / 1000);

            printf("The required CB of Each appartment is :\n");
            searchCB((ptr->totKw) / ((ptr->similar)*1000));
        }
        else
        {
            printf("\n");
            printf("The KW of the remaining appartment equals : %.2f KW\n", (ptr->totKw) / 1000);
            printf("The required CB of them is  :\n");
            searchCB((ptr->totKw) / ((ptr->similar)*1000));
        }
        totOfAll = totOfAll + ptr->totKw;
        ptr = ptr->next;
    }
    totKVA = (nOfFloors * totOfAll) / 1000 ;
    printf("\n");
    printf("The Total KVA of the entire building equals : %.2f KW. \n", totKVA);
    if(totKVA <= 648)
    {
    printf("The required CB of the whole building is :\n");
    searchCB(totKVA);
    printf("\n");
    }
    else
    {
        printf("\n");
        printf("Because the total KVA is very large (NO single CB Can carry it) you will need to divide it into "
        "two CB's or more :\n");
        printf("Use 3 CB's : \n");
        searchCB(totKVA / 3);
        printf("\n");
    }
}