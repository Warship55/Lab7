
#include "lab7struct.h"

int menu()
{
    int op;
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
    return op;
}

void afisare(int nr, struct computer obj[nr]) // functie afisare//3
{
    printf("Date tabel\nModel\tProcesor\tMemorie\tViteza\tPretul\n"); // afisam randul cu denumirea coloanelor
    for (int i = 0; i < nr; i++)                                      // parcurgem obiectele si le afisam
    {
        printf("%d %s\t%s\t%d\t%d\t%d\n", i, obj[i].model, obj[i].procesor, obj[i].memorie, obj[i].viteza, obj[i].pretul);
    }
}

void cautare(int nr, struct computer obj[nr])
{
    char aj2[50];
    printf("Introduceti modelul obiectului:");
    scanf("%s", &aj2);
    for (int i = 0; i < nr; i++)
    {
        if (strcmp(obj[i].model, aj2) == 0)
            printf("%d %s\t%s\t%d\t%d\t%d\n", i, obj[i].model, obj[i].procesor, obj[i].memorie, obj[i].viteza, obj[i].pretul);
    }
}