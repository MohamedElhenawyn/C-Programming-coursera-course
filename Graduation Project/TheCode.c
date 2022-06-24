#include <stdio.h>
#include <stdlib.h>
#include "floors.h"


int main()
{
    //!showMemory (start = 65520)
    //!showMemory (start = 272)
    struct floor *start;  // take the start of linked list
    int nOfFloors; // take the no of floors
    printf("Please Enter the Number of the floors at the building : \n");
    scanf("%d", &nOfFloors);
    start = allSim();
    loadEstimation(start);
    printRes(start, nOfFloors);
    freeMemory(start);
    return 0 ;
}


