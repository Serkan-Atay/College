#include <stdlib.h>
#include <stdio.h>
struct person {
    char firstname[30];
    char lastname[30];
    unsigned long phonenumber;
    struct person *next;
};

void print_menu(short *selection) {    
    printf("Bitte Auswahl treffen:\n");
    printf("1) Neuen Eintrag hinzufuegen\n");
    printf("2) Alle Eintraege anzeigen\n");
    printf("0) Programm beenden\n");
    printf("Auswahl: ");
    
    scanf("%hd", selection);
}

struct person* add_person(struct person *lastPerson) {
    struct person *p;
    p = malloc(sizeof(struct person));
    
    printf("\nNeuen Eintrag hinzufuegen\n");
    printf("Vorname: ");
    scanf("%s", p->firstname);
    printf("Nachname: ");
    scanf("%s", p->lastname);
    printf("Telefonnummer: ");
    scanf("%lu", &p->phonenumber);
    p->next = lastPerson;
    
    printf("\n");
    return p;
 }

void print_phonebook(struct person *lastPerson) {
    struct person *curr = lastPerson;
    
    if (lastPerson == NULL) {
        printf("\nTelefonbuch leer\n\n");
        return;
    }
    
    printf("\nTelefonbuch anzeigen\n");
    
    while (curr != NULL) {
        printf("%s, %s: %lu\n", curr->lastname, curr->firstname, curr->phonenumber);
        curr = curr->next;
    }
    printf("\n");
}
    
int main() {
    struct person *lastPerson = NULL;
    
    
    short menuSelection = -1;
    while (menuSelection != 1 && menuSelection != 2 && menuSelection != 0) {
        print_menu(&menuSelection);
        if (menuSelection == 1) {
            lastPerson = add_person(lastPerson);
            menuSelection = -1;
        } else if (menuSelection == 2) {
            print_phonebook(lastPerson);
            menuSelection = -1;
        } else if (menuSelection == 0) {
            return 0;
        }
    }
}
