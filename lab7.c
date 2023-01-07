#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab7function.h" //includem functiile
#include "lab7struct.h"   //includem structura

void main()
{
    int op, mn = 1, nr = 0, i = 0;
    int st;

    struct computer *obj, tmp;

    while (mn)
    {
        op = menu(); // afisarea menu + optiuni
        switch (op)
        {
        case 1:                                                          // alocarea memorie
            obj = (struct course *)malloc(50 * sizeof(struct computer)); // alocam memorie
            continue;
        case 2: // introducerea elementelor
            i = nr;
            nr++;
            for (i; i < nr; i++)
            {
                printf("Nume model:");
                scanf("%s", &obj[i].model); /// obj[i].model (obj + i)->model
                printf("Nume procesor:");
                scanf("%s", &obj[i].procesor);
                printf("Memorie:");
                scanf("%d", &obj[i].memorie);
                printf("Viteza:");
                scanf("%d", &obj[i].viteza);
                printf("Pretul:");
                scanf("%d", &obj[i].pretul);
            }
            continue;
        case 3:               // afisarea datelor
            afisare(nr, obj); // functie pentru afisarea datelor
            continue;
        case 4: // introducerea elementelor
            i = nr;
            nr++;
            for (i; i < nr; i++)
            {
                printf("Nume model:");
                scanf("%s", (obj + i)->model);
                printf("Nume procesor:");
                scanf("%s", (obj + i)->procesor);
                printf("Memorie:");
                scanf("%d", &(obj + i)->memorie);
                printf("Viteza:");
                scanf("%d", &(obj + i)->viteza);
                printf("Pretul:");
                scanf("%d", &(obj + i)->pretul);
            }
            continue;
        case 5: // modificarea elementului
            modificare(nr, obj);
            continue;
        case 6: // afisarea elementului cautat
            cautare(nr, obj);
            continue;
        case 7: // functie pentru sortare
            sortare(nr, obj);
            continue;
        case 8: // stergere
            sterge(&nr, obj);
            continue;
        case 9:
            free(obj);
            nr = 0;
            continue;
        case 0:
            printf("Inchidere program");
            mn = 0;

            break;
        }
    }
}
