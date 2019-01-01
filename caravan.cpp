/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdlib.h>
#include "caravan.h"
#include "general.h"

#define COUNT_CARAVANS 5

struct CaravanImplementation{
    int length;
    PackAnimal animal;
    struct CaravanImplementation* next;
};

Caravan head = (Caravan)malloc(sizeof(struct CaravanImplementation));

Caravan new_caravan()
{
    head -> animal = 0;
    head -> next = 0;
    head -> length = 0;
    return head;
}

int get_length(Caravan caravan)
{
    return caravan -> length;
}

void delete_caravan(Caravan caravan)
{
    Caravan current = head;
    while (current != 0)
    {
        if(caravan == head)
        {
            sfree(head);
        }
        else if(caravan == current->next)
        {
            current -> next = caravan -> next;
            sfree(caravan);
        }
       current = current->next;
    }

}


void add_pack_animal(Caravan caravan, PackAnimal animal)
{

}


void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
    caravan->length-1;
    caravan->animal = 0;
    delete_animal(animal);
}


int get_caravan_load(Caravan caravan)
{
    return 0;
}


void unload(Caravan caravan)
{

}


int get_caravan_speed(Caravan caravan)
{
    return 0;
}


void optimize_load(Caravan caravan){

}
