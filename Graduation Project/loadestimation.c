#include "floors.h"
void loadEstimation(struct floor *start)
{
    struct floor *ptr ;
    float maxLighingD, maxSocketsD, maxAcD;
    ptr = start ;
    while (ptr != NULL)
    {
        //lighting loads
        maxLighingD = ptr->Area * 15 * .6;
        //Sockets loads
        maxSocketsD = ptr->Area * 40 * .7;
        //Air conditioning loads
        maxAcD = ptr->Area * 65 * .7;
        ptr->totKw = ptr->similar * (maxLighingD + maxSocketsD + maxAcD);
        ptr = ptr->next;
    }
}
