#include "floors.h"
struct floor *allSim()
{
    /*start to hold the start of linked list
    end to hold the end of the current
    new to hold the value of the next location*/
    struct floor *start, *end, *newptr;

    int nOfapp;//hold the number of appartments at the floor
    int sim = 0 ; //hold the number of the similar if there are
    int i;//counter for the appartments
    int newNo; // hold the new no of appartments after subtract the similar

    printf("Enter the number of the appartments at the floor: \n");
    scanf("%d", &nOfapp);
    printf("Enter if there is similar appartments at floor: \n");
    scanf("%d", &sim);
    start = NULL;
    newNo = nOfapp - sim;

    for (i = 0; i <= newNo; i++)
    {

        if (sim == 0) // check if similar equals zero so that i have to take all of them individually
        {
            while (newNo != 0)
            {
                newptr = createPlace(newNo);
                if (start == NULL)
                {
                    start = newptr;
                    end = start;
                }
                else
                {
                    end = append(end, newptr);

                }
                newNo--;

            }

        }
        else  //i have to check the number of similar then sub them from the no of appartments
        {
            newptr = createPlace(sim);// allocate a place for those similar locations

            if (start == NULL) // append the linked list
            {
                start = newptr;
                end = start;
            }
            else
            {
                end = append(end, newptr);

            }

            if (newNo > 1) // check if newNo > 1 so that there can be similar appartments
            {

                printf("Enter if there is another similar "
                "appartments in the remaining: %d appartments.\n", newNo);
                scanf("%d", &sim);
                if (newNo - sim != 0)
                {
                    newNo = newNo - sim;
                }
                else // similar = the number of the remaining appartments
                {
                    i = 0; //set the counter to equal zero
                    sim = newNo; // return that the similar equals to the number of remaining appartments
                    newNo = 0;//say that there is no remaining appartments
                    i--;// sub 1 from counter not to go out from the for loop

                }



            }
            else // if the newNumber equals 1
            {
                sim = 0;
                i = 0;
            }

        }


    }

    return start ;

}
void freeMemory(struct floor *start)
{
    struct floor *ptr ;
    ptr = start ;
    while (ptr != NULL)
    {
        start = ptr;
        ptr = ptr->next;
        free(start);
    }
}


