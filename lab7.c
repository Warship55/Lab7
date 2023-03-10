#include <stdio.h>//prevenirea declararea implicita a functilor scanf printf
#include <stdlib.h>//prevenirea declararea implicita a functilor malloc free
#include <string.h>//prevenirea declararea implicita a functiei strcmp

#include "lab7function.h" //includem functiile
#include "lab7struct.h"   //includem structura

void main()
{
    int op, mn = 1, nr = 0;

    struct computer *obj;//declaram obj ca tablou unidimensional pentru structura

    while (mn)
    {
        op = menu(); // afisarea menu cu optiuni
        switch (op)
        {
        case 1:                                                          
            obj = (struct computer *)malloc(100 * sizeof(struct computer)); // alocam memorie pentru 100 de inregistrari de tip structurii
            continue;
        case 2: // introducerea elementelor
            adaugare(&nr,obj);
            continue;
        case 3:               
            afisare(nr, obj); // functie pentru afisarea datelor
            continue;
        case 4: // introducerea elementelor
            adaugare(&nr,obj);
            continue;
        case 5: // modificarea elementului
            modificare(nr, obj);
            continue;
        case 6: // afisarea elementului cautat
            cautare(nr, obj);
            continue;
        case 7: // functie pentru sortare
            afisare(nr, obj);//afis inainte datele
            sortare(nr, obj);//sortare
            afisare(nr, obj);//afis date dupa sortare
            continue;
        case 8: // stergere
            afisare(nr, obj);//afis inainte datele
            sterge(&nr, obj);
            afisare(nr, obj);//afis date dupa sortare
            continue;
        case 9:
            free(obj);//eliberarea memorie
            nr = 0;
            printf("Eliberarea memorie\n");
            continue;
        case 0:
            printf("Inchidere program");
            mn = 0;

            break;
        }
    }
}
