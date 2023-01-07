int menu()
{   int op;
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