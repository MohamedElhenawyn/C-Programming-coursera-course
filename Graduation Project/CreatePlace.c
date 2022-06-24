#include "floors.h"
struct floor *createPlace(int sim)
{
    struct floor *ptr ;
    ptr = (struct floor *) malloc(sizeof(struct floor));
    ptr->similar = sim;
    if (ptr->similar > 1)
    {
        printf("Enter the area of an appartment of these  %d appartments : \n", ptr->similar);
        scanf("%f", &(ptr->Area));
        //printf("Enter the class of an appartment of these  %d appartments : \n", ptr->similar);
        //scanf("%d", &(ptr->classOfApp));
    }
    else
    {
        printf("Enter the area of the remaining appartment : \n");
        scanf("%f", &(ptr->Area));
        //printf("Enter the class of the remaining appartment : \n");
        //scanf("%d", &(ptr->classOfApp));
    }
    ptr->next = NULL;
    return ptr ;
}
struct floor *append(struct floor *end, struct floor *newptr)
{
    end->next = newptr;
    return (end->next);

}