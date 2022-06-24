#pragma once
#include <stdio.h>
#include <stdlib.h>
struct floor
{
    float Area ;
    int similar;
    int classOfApp;
    float totKw;
    struct floor *next ;
};

struct floor *append(struct floor *, struct floor *);   //fn to append the linked list
struct floor *allSim();  // return the start of the linked list
struct floor *createPlace(int);   // allocate a place of the digits given
void loadEstimation(struct floor *); // calculate the load of the building
void freeMemory(struct floor *);  //free the memory
void printRes(struct floor *, int); //print the linked list
void searchCB(int KVA);
