#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab7function.h"

struct computer
    {
        char model[50], procesor[50];
        int memorie, viteza, pretul;
    };

void main()
{
    int op, mn = 1, nr = 0, i = 0;
    int aj, st;
    char aj2[50];

    

    struct computer *obj, tmp;

    while (mn)
    {
        // system("cls");
        printf("\t\tMeniu\t\t\n\n");
        printf("1. Alocarea dinamica a memoriei pentru tabloul de structuri.\n"); //+
        printf("2. Introducerea elementelor tabloului de la tastatura.\n");       //+
        printf("3. Afisarea elementelor tabloului la ecran.\n");                  //+
        printf("4. Adaugarea unui element nou la sfarsit.\n");                    //+
        printf("5. Modificarea elementului tabloului.\n");                        //+
        printf("6. Cautarea elementului tabloului.\n");                           //+
        printf("7. Sortarea tabloului.\n");                                       //+
        printf("8. Eliminarea elementului indicat din tablou.\n");                //+
        printf("9. Eliberarea memoriei alocate pentru tablou.\n");                //+
        printf("0. Iesire din program.\n\n");                                     //+

        printf("Introduceti operatia:");
        scanf("%d", &op);

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
        case 3: // afisarea datelor

            printf("Date tabel\nModel\tProcesor\tMemorie\tViteza\tPretul\n");
            for (int i = 0; i < nr; i++)
            {
                printf("%d %s\t%s\t%d\t%d\t%d\n", i, obj[i].model, obj[i].procesor, obj[i].memorie, obj[i].viteza, obj[i].pretul);
            }

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
        case 6:
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
