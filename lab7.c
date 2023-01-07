#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab7function.h"
#include "lab7struct.h"

void main()
{
    int op, mn = 1, nr = 0, i = 0;
    int aj, st;
    char aj2[50];

    struct computer *obj, tmp;

    while (mn)
    {
        op = menu();//afisarea menu + optiuni
        switch (op)
        {
        case 1:                                                          // alocarea memorie
            obj = (struct course *)malloc(50 * sizeof(struct computer)); // alocam memorie
            continue;
        case 2: // introducerea elementelor
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

            printf("Introduceti numarul obiectului:");
            scanf("%d", &aj);
            // printf("%s hai odata", obj[aj].model);
            printf("Nume model:");
            scanf("%s", obj[aj].model);
            printf("Nume procesor:");
            scanf("%s", obj[aj].procesor);
            printf("Memorie:");
            scanf("%d", &obj[aj].memorie);
            printf("Viteza:");
            scanf("%d", &obj[aj].viteza);
            printf("Pretul:");
            scanf("%d", &obj[aj].pretul);

            continue;
        case 6: // afisarea elementului cautat
            printf("Introduceti modelul obiectului:");
            scanf("%s", &aj2);
            for (i = 0; i < nr; i++)
            {
                if (strcmp(obj[i].model, aj2) == 0)
                    printf("%d %s\t%s\t%d\t%d\t%d\n", i, obj[i].model, obj[i].procesor, obj[i].memorie, obj[i].viteza, obj[i].pretul);
            }
            continue;
        case 7:
            for (int i = 0; i < nr; i++)
            {
                for (int j = nr - 1; j >= i; j--)
                {

                    if (strcmp(obj[j - 1].model, obj[j].model) > 0)
                    {
                        tmp = obj[j - 1];
                        obj[j - 1] = obj[j];
                        obj[j] = tmp;
                    }
                }
            }

            continue;
        case 8:
            printf("Introduceti numarul productului:");
            scanf("%d", &st);

            for (int i = st; i < nr; i++)
            {

                obj[i] = obj[i + 1];
                nr--;
            }
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

void afisare(int nr, struct computer obj[nr]) // functie afisare//3
{
    printf("Date tabel\nModel\tProcesor\tMemorie\tViteza\tPretul\n"); // afisam randul cu denumirea coloanelor
    for (int i = 0; i < nr; i++)                                      // parcurgem obiectele si le afisam
    {
        printf("%d %s\t%s\t%d\t%d\t%d\n", i, obj[i].model, obj[i].procesor, obj[i].memorie, obj[i].viteza, obj[i].pretul);
    }
}
