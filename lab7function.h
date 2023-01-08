
#include "lab7struct.h" //includem structura

int menu() // afisarea meniului cu optiuni
{
    int op;
    // system("cls"); //curata ecranul
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

    printf("Introduceti operatia:"); // citirea optiunii
    scanf("%d", &op);
    return op; // intoarcerea nr optiunii
}

void afisare(int nr, struct computer obj[nr]) // functie afisare
{
    printf("Date tabel\n\tModel\tProcesor\tMemorie\tViteza\tPretul\n"); // afisam randul cu denumirea coloanelor
    for (int i = 0; i < nr; i++)                                        // parcurgem obiectele si le afisam
    {
        printf("%d\t%s\t%s\t%d\t%d\t%d\n", i, obj[i].model, obj[i].procesor, obj[i].memorie, obj[i].viteza, obj[i].pretul);
    }
}

void cautare(int nr, struct computer obj[nr]) // functia cautare
{
    char aj2[50];
    printf("Introduceti modelul obiectului:"); // citim modelul cautat
    scanf("%s", &aj2);
    for (int i = 0; i < nr; i++)
    {
        if (strcmp(obj[i].model, aj2) == 0) // comparam fiecare model cu cel introdus
            printf("%d %s\t%s\t%d\t%d\t%d\n", i, obj[i].model, obj[i].procesor, obj[i].memorie, obj[i].viteza, obj[i].pretul);
    }
}

void modificare(int nr, struct computer obj[nr]) // functia de modificare
{
    int aj;
    printf("Introduceti numarul obiectului:"); // citim nr de ordine a obiectului care va fi modificat
    scanf("%d", &aj);
    printf("Nume model:");
    scanf("%s", obj[aj].model);//citim si rescriem datele direct
    printf("Nume procesor:");
    scanf("%s", obj[aj].procesor);
    printf("Memorie:");
    scanf("%d", &obj[aj].memorie);
    printf("Viteza:");
    scanf("%d", &obj[aj].viteza);
    printf("Pretul:");
    scanf("%d", &obj[aj].pretul);
}

void sortare(int nr, struct computer obj[nr])//functia sortare
{
    struct computer tmp; // declaram tmp de tip structura pentru a memora datele la modificare
    for (int i = 0; i < nr; i++)
    {
        for (int j = nr - 1; j >= i; j--) // j de la sfarsit spre i
        {

            if (strcmp(obj[j - 1].model, obj[j].model) > 0) // daca obiectul precedent e mai mare
            {
                tmp = obj[j - 1]; // prin bule le schimbam
                obj[j - 1] = obj[j];
                obj[j] = tmp;
            }
        }
    }
}
void sterge(int *nr, struct computer obj[*nr])
{   //*nr vine ca pointer ca sa se modifice fara return
    int st;
    printf("Introduceti numarul productului:");
    scanf("%d", &st);

    for (int i = st; i < *nr; i++) // de la nr introdus
    {

        obj[i] = obj[i + 1]; // rescriem obiectele
    }
    *nr = *nr - 1;//scadem nr de inregistrari
}
void adaugare(int *nr, struct computer obj[*nr])
{   //*nr vine ca pointer ca sa se modifice fara return
    int i = *nr;//i primeste nr de inregistrari
    *nr = *nr + 1;//adaugam o inregistrare
    for (i; i < *nr; i++)
    {
        printf("Nume model:");
        scanf("%s", &obj[i].model); /// echivalent obj[i].model (obj + i)->model
        printf("Nume procesor:");
        scanf("%s", &obj[i].procesor);//citim date si le inregistram in tabel unidimensional
        printf("Memorie:");
        scanf("%d", &obj[i].memorie);
        printf("Viteza:");
        scanf("%d", &obj[i].viteza);
        printf("Pretul:");
        scanf("%d", &obj[i].pretul);
    }
}